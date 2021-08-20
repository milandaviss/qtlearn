#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H
#include"rectangle.h"
class Parallelogram{

private:
    int length;
    Rectangle r;
public:
   float getVoulme();
   Parallelogram::Parallelogram(float w,float h,float l):r(w,h),length(l){

    }
};
#endif // PARALLELOGRAM_H
