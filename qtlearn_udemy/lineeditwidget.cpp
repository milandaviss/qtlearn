#include "lineeditwidget.h"
#include "ui_lineeditwidget.h"

LineEditWidget::LineEditWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LineEditWidget)
{
    ui->setupUi(this);
}

LineEditWidget::~LineEditWidget()
{
    delete ui;
}
