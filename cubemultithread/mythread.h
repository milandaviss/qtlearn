#ifndef MYTHREAD_H
#define MYTHREAD_H
#include<QThread>
#include<QtCore>
#include<QPainterPath>
#include<QLinearGradient>
static QMutex mutex;
class Mythread : public QThread
{
    Q_OBJECT
public:
    Mythread(QObject*);
    void run() override;
    bool Stop;
    void paint(QPainter *);

signals:
    void waveform(QPainterPath *);
private:
    QLinearGradient myGradient;

      QPoint c1[10][50],c2[10][50],endPoint[10][50];
     QPainterPath myPath[10];
     int waveindex;
public slots:
     void  onRecieving(QPainterPath *);

};

#endif // MYTHREAD_H
