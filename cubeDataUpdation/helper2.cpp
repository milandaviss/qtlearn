
/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the examples of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:BSD$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** BSD License Usage
** Alternatively, you may use this file under the terms of the BSD license
** as follows:
**
** "Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are
** met:
**   * Redistributions of source code must retain the above copyright
**     notice, this list of conditions and the following disclaimer.
**   * Redistributions in binary form must reproduce the above copyright
**     notice, this list of conditions and the following disclaimer in
**     the documentation and/or other materials provided with the
**     distribution.
**   * Neither the name of The Qt Company Ltd nor the names of its
**     contributors may be used to endorse or promote products derived
**     from this software without specific prior written permission.
**
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "helper2.h"
#include<QTest>
#include <QPainter>
#include <QPaintEvent>
#include <QWidget>
#include<math.h>

#include<QDebug>
#include<time.h>
#include<stdlib.h>

//! [0]
Helper2::Helper2()
{
    QLinearGradient gradient(QPointF(50, -20), QPointF(80, 20));
    gradient.setColorAt(0.0, Qt::white);
    gradient.setColorAt(1.0, QColor(0xa6, 0xce, 0x39));

    background = QBrush(QColor(0, 0, 0));
    circleBrush = QBrush(gradient);
    circlePen = QPen(Qt::green);
    circlePen.setWidth(3);
    textPen = QPen(Qt::yellow);
    textFont.setPixelSize(50);

    srand(time(0));
    for(int i=0;i<10;i++)
    {
        randattr[i]=10+(rand()%5);
    }
    lgap=50;
    period=15;
}
//! [0]

//! [1]
void Helper2::paint(QPainter *painter, QPaintEvent *event, int elapsed)
{
    painter->fillRect(event->rect(), background);
    painter->translate(100, 700);
//! [1]

//! [2]

    painter->setBrush(QColor(0,0,0));
    painter->setPen(circlePen);
   painter->translate(0,elapsed * 0.025);


    QLinearGradient myGradient;

      QPoint c1[10][50],c2[10][50],endPoint[10][50];
     QPainterPath myPath[10];

    for(int j=0;j<10;j++)
    {

        myPath[j].moveTo (0,-j*lgap);
    yaxis=0;
     for(int i=0;i<50;i++)
     {


         if((i+1)==((j+1)*10))

         {
            if(yaxis==0)
                 yaxis=20;

             c1[j][i]=QPoint(i*period+5,-yaxis-j*lgap) ;
          c2[j][i]=QPoint(i*period+10, -yaxis-j*lgap);
          endPoint[j][i]=QPoint(i*period+10,-yaxis-j*lgap);}
         else {

                               c1[j][i]=QPoint(i*period+10,-yaxis-j*lgap) ;
                             c2[j][i]=QPoint(i*period+5,-yaxis/2 -j*lgap);
                             endPoint[j][i]=QPoint(i*period+5,-j*lgap);
                            yaxis=0;


         }



     myPath[j].cubicTo(c1[j][i], c2[j][i], endPoint[j][i]);

     }

     if(elapsed<j*1000)
         painter->drawPath(myPath[j]);



    }
    painter->save();
    painter->restore();



}
