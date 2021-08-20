#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"stdlib.h"
#include<time.h>
#include<qdebug.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    srand(time(NULL));
    secretNumber=(rand()%10)+1;
    qDebug()<<"secret Number is "<<QString::number(secretNumber);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    guessNumber=ui->spinBox->value();
    if(guessNumber==secretNumber)
        ui->label_2->setText(QString::number(secretNumber)+"is the right Answer");
    else{
        if(guessNumber<secretNumber)
            ui->label_2->setText("Guess Higher!");
        else
             ui->label_2->setText("Guess Lower!");
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->spinBox->setValue(0);
    secretNumber=rand()%10+1;
    qDebug()<<"secret Number is "<<QString::number(secretNumber);
      ui->label_2->setText("Guess Number!");

}
