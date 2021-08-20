#include "widget.h"
#include "ui_widget.h"
#include<QDebug>
#include <QtQuick/QQuickView>
#include<QMessageBox>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);


}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{


    qDebug("Button Pressed");
    QMessageBox::information(this,"message","you pressed buttom",QMessageBox::Ok);
}
