#ifndef LINEEDITWIDGET_H
#define LINEEDITWIDGET_H

#include <QWidget>

namespace Ui {
class LineEditWidget;
}

class LineEditWidget : public QWidget
{
    Q_OBJECT

public:
    explicit LineEditWidget(QWidget *parent = nullptr);
    ~LineEditWidget();

private:
    Ui::LineEditWidget *ui;
};

#endif // LINEEDITWIDGET_H
