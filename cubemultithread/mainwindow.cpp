#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"window.h"
#include"graph.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Window *w=new Window(this);
    ui->horizontalLayout->addWidget(w);

    ui->horizontalLayout_2->addWidget(graph1);
}

MainWindow::~MainWindow()
{
    delete ui;
}

