#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"mythread.h"
#include<QThread>
#include<QPainter>
 static  QPainterPath path[10];
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    Mythread *mthread;
public slots:
    void onRecieving(QPainterPath*);
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();
protected:
     void paintEvent(QPaintEvent *event) ;
private:
    Ui::MainWindow *ui;
    QPainter painter;

};
#endif // MAINWINDOW_H
