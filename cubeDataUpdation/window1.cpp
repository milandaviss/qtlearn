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

//#include "glwidget.h"

#include "window1.h"
#include"glwidget2.h"
#include"glwidget3.h"
#include <QGridLayout>
#include <QLabel>
#include <QTimer>

//! [0]
Window1::Window1()
{
    setWindowTitle(tr("2D Painting on Native and OpenGL Widgets"));


    openGL = new GLWidget1(&helper,this);
     GLWidget2 *graph2 = new GLWidget2(&helper1, this);
      GLWidget3 *graph3 = new GLWidget3(&helper2, this);
   // threadnew= new QThread();
 // threadnew->start();
   //openGL->moveToThread(threadnew);
   // graph2->moveToThread(threadnew);
    //graph3->moveToThread(threadnew);

    QGridLayout *layout = new QGridLayout;
  //  layout->addWidget(native, 0, 0);
    layout->addWidget(openGL, 0, 1);
    //layout->addWidget(nativeLabel, 1, 0);
   // layout->addWidget(openGLLabel, 1, 1);
    setLayout(layout);

     timer= new QTimer();
   QOpenGLWidget::connect(timer, &QTimer::timeout, openGL, &GLWidget1::grabGraph);
    connect(timer, &QTimer::timeout, openGL, &GLWidget1::animate);
    connect(timer, &QTimer::timeout, graph2, &GLWidget2::grabGraph);
    connect(timer, &QTimer::timeout, graph2, &GLWidget2::animate);
    connect(timer, &QTimer::timeout, graph3, &GLWidget3::grabGraph);
    connect(timer, &QTimer::timeout, graph3, &GLWidget3::animate);

    timer->start(1000);
}

Window1::~Window1()
{
 //   threadnew->exit();
}
//! [0]
