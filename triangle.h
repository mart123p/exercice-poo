#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <math.h>

class Triangle {
public:
    Triangle(double side0, double side1, double side2);

    double getPerimeter();
    double getArea();

private:
    double _side0;
    double _side1;
    double _side2;
};

#endif // TRIANGLE_H
