#include "graph.h"

graph::graph(QWidget *parent)
{
    mthread=new Mythread(this);

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
