#include <tobii/tobii.h>
#include <tobii/tobii_streams.h>
#include <stdio.h>
#include <assert.h>
#include <cstring>
#include "mainwindow.h"

#include <QApplication> //应用程序类
#include <QLabel>
#include "myemit.h"

double X=0.0;
double Y=0.0;

MyEmit::MyEmit(QObject *parent):QObject(parent)
{

}

void MyEmit::send_emit()
{
    double a = X;
    //QString b = "hello";
    int b=1;

    emit start_emit(a,b);
}



void gaze_point_callback(tobii_gaze_point_t const *gaze_point, void *user_data) {
    if (gaze_point->validity == TOBII_VALIDITY_VALID){
        printf("Gaze point: %f, %f\n",
               gaze_point->position_xy[0],
               gaze_point->position_xy[1]);
        X=gaze_point->position_xy[0];
        Y=gaze_point->position_xy[1];
    }
}

static void url_receiver(char const *url, void *user_data) {
    char *buffer = (char *) user_data;
    if (*buffer != '\0') return; // only keep first value

    if (strlen(url) < 256)
        strcpy(buffer, url);
}

int main(int argc, char *argv[]) {

    QApplication a(argc, argv); //a应用程序对象，QT中有且仅有一个应用程序对象；
    MainWindow w;   //创建一个自定义窗口；
    w.show();
    //QLabel label("HelloWorld");
    //label.show();


    tobii_api_t *api;
    tobii_error_t error = tobii_api_create(&api, NULL, NULL);
    assert(error == TOBII_ERROR_NO_ERROR);

    char url[256] = {0};
    error = tobii_enumerate_local_device_urls(api, url_receiver, url);
    assert(error == TOBII_ERROR_NO_ERROR && *url != '\0');

    tobii_device_t *device;
    error = tobii_device_create(api, url, &device);
    assert(error == TOBII_ERROR_NO_ERROR);

    error = tobii_gaze_point_subscribe(device, gaze_point_callback, 0);
    assert(error == TOBII_ERROR_NO_ERROR);

    int is_running = 100; // in this sample, exit after some iterations  1000 to 100 to 10
    while (--is_running > 0) {
        error = tobii_wait_for_callbacks(1, &device);
        assert(error == TOBII_ERROR_NO_ERROR || error == TOBII_ERROR_TIMED_OUT);

        error = tobii_device_process_callbacks(device);
        assert(error == TOBII_ERROR_NO_ERROR);
    }

    error = tobii_gaze_point_unsubscribe(device);
    assert(error == TOBII_ERROR_NO_ERROR);

    error = tobii_device_destroy(device);
    assert(error == TOBII_ERROR_NO_ERROR);

    error = tobii_api_destroy(api);
    assert(error == TOBII_ERROR_NO_ERROR);


    return a.exec();    //a.exec()进入消息循环机制
    //return 0;
}
