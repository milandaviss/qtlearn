#ifndef GRAPH_H
#define GRAPH_H
#include<QPainter>
#include <QWidget>
#include"mythread.h"
static  QPainterPath path1[10];
class graph : public QWidget
{
public:
    explicit graph(QWidget);
      void startThread();

private:
    Mythread *mthread;
     QPainter painter;

      int waveindex;
protected:
     void paintEvent(QPaintEvent *event) ;


public slots:
  void onRecieving(QPainterPath*);

};

#endif // GRAPH_H
