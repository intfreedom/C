#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "myemit.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

/* For output*/
private slots:
    void on_pushButton_clicked();
    void read_emit(float a, int b);
/* For output*/

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
