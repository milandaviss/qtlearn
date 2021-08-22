#include <QCoreApplication>
#include"helloworld.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    HelloWorld w;


    return a.exec();
}
