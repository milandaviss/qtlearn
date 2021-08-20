#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle{

public:
    Rectangle();
    Rectangle(float,float);
    void setWidth(float );
    void setHeight(float);
    float getArea();
private:
    float width;
    float height;


};
#endif // RECTANGLE_H
