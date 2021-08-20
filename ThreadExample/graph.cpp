#include "graph.h"

graph::graph(QWidget)
{
    mthread=new Mythread(this);
    connect(mthread,SIGNAL(waveform(QPainterPath *)),this ,SLOT(onRecieving(QPainterPath *)));
    startThread();
}

void graph::startThread()
{
    mthread->start();
}
void  graph::onRecieving(QPainterPath *wave)
{
  path1[waveindex++]= *wave;
  if(waveindex>=9){

  waveindex=0;
    }
     update();
     qDebug()<<"hi";
}
void graph::paintEvent(QPaintEvent *event)
{

    painter.begin(this);
    painter.setRenderHint(QPainter::Antialiasing);
   painter.drawLine(0,0,100,100);
   for(int i=0;i<waveindex;i++){
 painter.drawPath(path1[i]);}
    painter.end();
}
