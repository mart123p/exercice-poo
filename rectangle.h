#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
public:
    Rectangle(double width, double height);

    double getPerimeter();
    double getArea();

private:
    double _width;
    double _height;
};

#endif // RECTANGLE_H
