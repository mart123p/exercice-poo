#include "triangle.h"

//Cette classe fonctionne avec tous les triangles.
//On pouvait faire aussi une classe qui ne fonctionnait que pour les triangles isocèles, équilatérals,
//ou rectangle.

Triangle::Triangle(double side0, double side1, double side2): _side0(side0),_side1(side1),_side2(side2)
{

}

double Triangle::getPerimeter()
{
    return _side0 + _side1 + _side2;
}

double Triangle::getArea()
{
    double p = getPerimeter() / 2;
    return sqrt(p * (p - _side0) * (p - _side1) * (p - _side2));
}