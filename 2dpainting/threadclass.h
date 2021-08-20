#ifndef THREADCLASS_H
#define THREADCLASS_H
#include<QThread>
#include <QObject>
#include"window.h"

class ThreadClass : public QThread
{
public:
    ThreadClass();
    void run() override;

};

#endif // THREADCLASS_H
