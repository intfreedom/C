#ifndef MYEMIT_H
#define MYEMIT_H

#include<QObject>

class MyEmit:public QObject
{
    Q_OBJECT
public:
    explicit MyEmit(QObject *parent = nullptr);
    void send_emit();
signals:
    void start_emit(int, QString);
public slots:
};

#endif // MYEMIT_H
