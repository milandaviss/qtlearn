#include "rectangle.h"

void Rectangle::setHeight(float height)
{
   this->height=height;
}

Rectangle::Rectangle()
{
    this->width=10;
    this->height=30;
}

Rectangle::Rectangle(float w, float h):width(w),height(h)
{

}

void Rectangle::setWidth(float w)
{
    this->width=w;
}
float Rectangle::getArea(){
    return width*height;
}
