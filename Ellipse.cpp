#define _USE_MATH_DEFINES

#include <cmath>

#include "Ellipse.h"

Ellipse::Ellipse(double a, double b) {
    _name = "Ellipse";
    _a = a;
    _b = b;
}

double Ellipse::calculateP() const {
    return 4 * (M_PI * _a * _b + std::pow((_a - _b), 2)) / (_a + _b);
}

double Ellipse::calculateS() const {
    return M_PI * _a * _b;
}
