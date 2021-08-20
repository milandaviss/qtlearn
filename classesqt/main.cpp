#include <iostream>

using namespace std;
#include<rectangle.h>
#include<parallelogram.h>
#include<square.h>
int main()
{
    Rectangle p;
    Rectangle x(20,20);
 //   p.setHeight(10);
  //  p.setWidth(12);
   cout<<"Area of rectangle:"<<x.getArea()<<endl;
   Parallelogram p1(30,30,30);
   cout<<"Volume of parallelogram:"<<p1.getVoulme();
   Square r(20);
   cout<<"\nArea of square:"<<r.getArea()<<endl;
    return 0;
}
