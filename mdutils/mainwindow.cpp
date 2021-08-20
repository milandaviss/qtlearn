#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"newwidget.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    newWidget *widget1=new newWidget;
    //ui->centralwidget->addAction(widget1);
    ui->horizontalLayout->addWidget(widget1);



}

MainWindow::~MainWindow()
{
    delete ui;
}

