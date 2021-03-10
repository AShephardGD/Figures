#define _USE_MATH_DEFINES

#include <cmath>
#include <string>
#include <iostream>

#include "Figure.h"
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EqualateralTriangle.h"
#include "Parallelogram.h"
#include "Rectangle.h"
#include "Square.h"
#include "Ellipse.h"
#include "Circle.h"

int main() {
    Figure** figures = new Figure*[9];
    figures[0] = new Triangle(3, 3, 4);
    figures[1] = new RTriangle(3, 4);
    figures[2] = new ITriangle(3, 4);
    figures[3] = new ETriangle(6);
    figures[4] = new Parallelogram(2, 4, (M_PI * 2 / 3));
    figures[5] = new Rectangle(2, 4);
    figures[6] = new Square(4);
    figures[7] = new Ellipse(2, 4);
    figures[8] = new Circle(4);
    for (int i = 0; i < 9; ++i) {
        std::cout << figures[i]->getName() << std::endl;
        std::cout << figures[i]->calculateP() << std::endl;
        std::cout << figures[i]->calculateS() << std::endl << std::endl;
    }
}
