#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<helper.h>
#include <QMainWindow>

#include<window.h>

#include<window1.h>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void snapwindow();
    void newsnap_func();

private:
    Ui::MainWindow *ui;
    Helper helper;
    Window1 w1;
   QTimer *timer ;

};
#endif // MAINWINDOW_H
