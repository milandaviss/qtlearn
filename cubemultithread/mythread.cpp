#include "mythread.h"
#include"QPainter"
int yaxis=20;
int randattr[10];
int lgap,period;
Mythread::Mythread(QObject *parent)
{
this->Stop=false;

period=15;
lgap=20;
}

void Mythread::run()
{



      //  emit NumberChanged(i);



    for(int j=0;j<10;j++)
     {
        msleep (1000);

        myPath[j].moveTo (0,+j*lgap);
        yaxis=0;
        for(int i=0;i<50;i++)
         {
        if((i+1)==((j+1)*5))

         {
            if(yaxis==0)
                 yaxis=20;

             c1[j][i]=QPoint(i*period+5,+yaxis+j*lgap) ;
          c2[j][i]=QPoint(i*period+10, +yaxis+j*lgap);
          endPoint[j][i]=QPoint(i*period+10,+yaxis+j*lgap);}
                else {

                               c1[j][i]=QPoint(i*period+10,+yaxis+j*lgap) ;
                             c2[j][i]=QPoint(i*period+5,+yaxis/2 +j*lgap);
                             endPoint[j][i]=QPoint(i*period+5,+j*lgap);
                            yaxis=0;


                 }

              myPath[j].cubicTo(c1[j][i], c2[j][i], endPoint[j][i]);
             // qDebug()<<"hello"<<myPath[j];

            }

        emit waveform(&myPath[j]);


    }
}

void Mythread::paint(QPainter *painter)
{

for(int i=0;i<10;i++){

   painter->drawPath(myPath[i]);}


}
