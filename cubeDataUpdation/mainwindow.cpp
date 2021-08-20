#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include<window1.h>
#include<QTest>
#include<QTimer>
int btnpressed =0 ;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Window w(this);

      Window1 *w2=new Window1();
     // QThread *thread1=new QThread;
    // thread1->moveToThread(w2);
    //w1.show();

    //ui->horizontalLayout->addWidget(&w);
 ui->horizontalLayout_2->addWidget(w2);


     //openGL = new GLWidget1(&helper, this);
   //  ui->horizontalLayout_2->addWidget(openGL);


  // timer= new QTimer(this);
    //QTimer *timer1 = new QTimer(this);

    // connect(timer, &QTimer::timeout, openGL, &GLWidget1::animate);
     // connect(timer, &QTimer::timeout, this, &MainWindow::snapwindow);
    // timer->start(50);
     //timer1->start(10);
    // connect(ui->pushButton , SIGNAL(clicked()), this, SLOT(snapwindow()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::snapwindow()
{
    //qDebug("clicked");
   // openGL->grab(QRect(0,0,800,500)).save("images/sidenew.png");
 //   ui->horizontalWidget_2->grab().save("images/sidegrab.png");
   // ui->verticalWidget ->grab().save("hello.jpg");
   btnpressed++;
    if(btnpressed%2==1)
       ui->pushButton->setText("Stop");


    while(true)
       {
        if(btnpressed%2==0)
          {
            ui->pushButton->setText("Start");
            return;
        }

       //  w1.timer->stop();
         QTest::qWait(10);
    ui->centralwidget->grab(QRect(700,0,700,500)).save("images/side2.png");
    //ui->horizontalFrame_2->grab().save("images/side3.png");
    //ui->horizontalFrame_2->grab().save("images/side4.png");
   // w2->grab().save("images/side3.png");
   // w1.timer->start(50);
    }

}

void MainWindow::newsnap_func()
{

}

