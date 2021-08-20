#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<window.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Window *w=new Window();
   wi =new GLWidget();

    ui->horizontalLayout->addWidget(w);

    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(btnclicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::btnclicked()
{
    this->grab().save("../cubetexturing/images/side1.png");


}

