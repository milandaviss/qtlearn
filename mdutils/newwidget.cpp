#include "newwidget.h"
#include "ui_newwidget.h"
#include"QDebug"

newWidget::newWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::newWidget)
{
    ui->setupUi(this);

    ui->userName->setPlaceholderText("Enter Username");
    ui->passWord->setPlaceholderText("Enter Password");
  //  connect(ui->loginButton)
}

newWidget::~newWidget()
{
    delete ui;
}

void newWidget::on_loginButton_clicked()
{
    qDebug()<<"Username:"<<ui->userName->text()<<"password:"<<ui->passWord->text();

}
