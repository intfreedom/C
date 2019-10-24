#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    double a=0.123456;
    QPushButton *btn = new QPushButton;
    btn->setParent(this);
    btn->resize(200,100);
    btn->move(800,750);

    QString aa = QString::number(a);
    btn->setText(aa);


//    QPushButton *btn2 = new QPushButton(tr("Output: %l /n").arg(a), this);
//    btn2->resize(200,100);
//    btn2->move(1100,750);
//    connect(btn2, &QPushButton::clicked, this, &QMainWindow::close);



    resize(2000,1500);//set windows size;
    //QLabel->setText(QString::number(a));
    //ui->MainWindow->insertItem(0,new QListMainWindowItem(QString::number((unsigned int)&a,16)))
}

MainWindow::~MainWindow()
{
    delete ui;
}

/* For output*/
void MainWindow::on_pushButton_clicked()
{
    MyEmit myemit;
    connect(&myemit,SIGNAL(start_emit(int, QString)),this,SLOT(read_emit(int,QString)));
    myemit.send_emit();
}
void MainWindow::read_emit(int a, QString b)
{
    QString aa = QString::number(a,10);
    ui->lineEdit->setText(aa);
    ui->lineEdit_2->setText(b);
}
/* For output*/
