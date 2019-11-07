#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QDebug>

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

    QString aa = QString::number(a,10);
    btn->setText(aa);


    QPushButton *btn2 = new QPushButton(tr("%1").arg(b,10), this);
    btn2->resize(300,100);
    btn2->move(1600,750);
    connect(btn2, &QPushButton::clicked, this, &QMainWindow::close);



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
    connect(&myemit,SIGNAL(start_emit(double, int)),this,SLOT(read_emit(double,int)));
    myemit.send_emit();
}
void MainWindow::read_emit(double a, int b)
{
    QString aa = QString("%1").arg(a);  //把double a，相关的改为float a，就会出现警告" implicit conversion increases floating-point precision: 'float' to 'double' ".
    QString bb = QString::number(b,10);
    ui->lineEdit->setText(aa);
    ui->lineEdit_2->setText(bb);
}
/* For output*/
