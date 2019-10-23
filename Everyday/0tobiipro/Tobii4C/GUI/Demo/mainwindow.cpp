#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    int a=0;
    QPushButton *btn = new QPushButton;
    btn->setParent(this);
    btn->resize(200,100);
    btn->move(800,750);
    btn->setText("1");

    QPushButton *btn2 = new QPushButton("2", this);
    btn2->resize(200,100);
    btn2->move(1100,750);



    resize(2000,1500);//set windows size;
    //QLabel->setText(QString::number(a));
    //ui->MainWindow->insertItem(0,new QListMainWindowItem(QString::number((unsigned int)&a,16)))
}

MainWindow::~MainWindow()
{
    delete ui;
}

