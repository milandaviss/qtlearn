#include "mainwindow.h"
#include "ui_mainwindow.h"
int waveindex;
#include"graph.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    graph graph1;

   // QTimer *timer = new QTimer(this);

    //connect(timer, &QTimer::timeout, this, &MainWindow::on_pushButton_clicked);
  //  timer->start(1000);
    waveindex=0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void  MainWindow::onRecieving(QPainterPath *wave)
{
   // ui->label->setText(QString::number(Number));
   // painter.begin(this);
   // painter.drawPath(*wave);
     // painter.end();
   // *path = *wave;
    //qDebug()<<*wave;
    qDebug()<<"hello";
  path[waveindex++]= *wave;
  if(waveindex>=9){

  waveindex=0;
    }
     update();

}


void MainWindow::on_pushButton_clicked()
{
mthread->start();
}

void MainWindow::on_pushButton_2_clicked()
{
    mthread->Stop=true;
}
void MainWindow::paintEvent(QPaintEvent *event)
{
  //  QPainter painter;
    painter.begin(this);
    painter.setRenderHint(QPainter::Antialiasing);
   painter.drawLine(0,0,100,100);
   for(int i=0;i<waveindex;i++){
 painter.drawPath(path[i]);}
 //  mthread->paint(&painter);
 //  qDebug()<<path;
    painter.end();
}
