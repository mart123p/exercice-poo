#include <iostream>
#include "rectangle.h"
#include "triangle.h"

using namespace std;

int main(){
    Triangle  triangle(3, 3, 5);
    Rectangle rect(4, 3);

    cout << "Rectangle perimeter: " << rect.getPerimeter() << endl;
    cout << "Rectangle area: " << rect.getArea() << endl;
    cout << endl;
    cout << "Triangle perimeter: " << triangle.getPerimeter() << endl;
    cout << "Triangle area: " << triangle.getArea() << endl;

    return 0;
}
