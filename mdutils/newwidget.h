#ifndef NEWWIDGET_H
#define NEWWIDGET_H

#include <QWidget>

namespace Ui {
class newWidget;
}

class newWidget : public QWidget
{
    Q_OBJECT

public:
    explicit newWidget(QWidget *parent = nullptr);
    ~newWidget();

private:
    Ui::newWidget *ui;
private slots:
    void on_loginButton_clicked();

};

#endif // NEWWIDGET_H
