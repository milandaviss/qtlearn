#include "mainwindow.h"
#include"window1.h"
#include <QApplication>
#include<QTest>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    //Window1 w2;
   // while(true)
   // {
  //     QTest::qWait(50);
        //w2.grab().save("images/side3.png");
   // }


    return a.exec();
}
