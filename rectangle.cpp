#include "rectangle.h"

Rectangle::Rectangle(double width, double height)
: _width(width)
, _height(height)
{
}

double Rectangle::getPerimeter()
{
    return 2 * _height + 2 * _width;
}

double Rectangle::getArea()
{
    return _height * _width;
}
