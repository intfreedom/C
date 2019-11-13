#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QDebug>
#include <QMenuBar>
#include <QLabel>
#include <QProcess>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    int a=1;
    int b=2;
    QPushButton *btn = new QPushButton;
    btn->setParent(this);
    btn->resize(300,100);
    btn->move(100,750);
//    btn->move(0,0);

    QString aa = QString::number(a,10);
    btn->setText(aa);


    QPushButton *btn2 = new QPushButton(tr("%1").arg(b,10), this);
    btn2->resize(300,100);
    btn2->move(1600,750);
    connect(btn2, &QPushButton::clicked, this, &QMainWindow::close);

    QPushButton *myButton = new QPushButton;
    myButton->setParent(this);
    myButton->resize(200,100);
    myButton->move(1600,300);
    myButton->setText("start");
    connect(myButton,&QPushButton::clicked, this, &MainWindow::useShellSlot);

    resize(2000,1500);//set windows size;

//    startTimer(500);

    //菜单栏，只有一个
    QMenuBar *bar = menuBar();
    setMenuBar(bar);

    //setting 菜单
    QMenu * fileMenu = bar->addMenu("File");
    QAction * newAction = fileMenu->addAction("New");
}

void MainWindow::timerEvent(QTimerEvent *event){

    int W = 0;
    getPoint();
    if(X>0.5){
        W=2;
    }
    else{
        W=1;
    }
    ui->lineEdit->setText(QString::number(X));
    ui->lineEdit_2->setText(QString::number(W));
}

void MainWindow::useShellSlot()
{
//    QProcess *process = new QProcess();
//    process->start("/opt/TobiiProEyeTrackerManager/TobiiProEyeTrackerManager");
    startTimer(500);

}

MainWindow::~MainWindow()
{
    delete ui;
}

/* For output*/
void MainWindow::on_pushButton_clicked()
{
//    MyEmit myemit;
    QProcess *process = new QProcess();
    process->start("/opt/TobiiProEyeTrackerManager/TobiiProEyeTrackerManager");


//    connect(&myemit,SIGNAL(start_emit(double, int)),this,SLOT(read_emit(double,int)));
//    myemit.send_emit();
}

void MainWindow::read_emit(double a, int b)
{
    QString aa = QString("%1").arg(a);  //把double a，相关的改为float a，就会出现警告" implicit conversion increases floating-point precision: 'float' to 'double' ".
//    QString bb = QString::number(b,10);
//    QString bb = QString("%1").arg(QString::number(ui->lineEdit_2->mapFromGlobal(QCursor::pos()).x()));//鼠标点击在标签上的位置；
//    QString bb = QString("%1 %2").arg(QString::number(ui->lineEdit_2->mapFromGlobal(QWidget::pos()).x())).arg(QString::number(ui->lineEdit_2->mapFromGlobal(QWidget::pos()).y()));
    QString bb = QString("%1 %2").arg(ui->lineEdit_2->QWidget::pos().QPoint::x()).arg(ui->lineEdit_2->QWidget::pos().QPoint::ry());
    //只能获得这个对应当前应用的坐标，如果全屏的话，就相当于屏幕坐标了
    //弄清几大控件之间的关系；然后试着获取全局坐标；
    //同时启动多线程，眼动仪，一直工作，然后随时读取数据并记录；

    //1.1弄清楚为何on_pushButton_clicked直接和Button按钮链接的？？？
    //1.2各个坐标的位置控制
    ui->lineEdit->setText(aa);
    ui->lineEdit_2->setText(bb);
}
/* For output*/
