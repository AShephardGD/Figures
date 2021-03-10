#include <cmath>
#include <iostream>

#include "Parallelogram.h"

Parallelogram::Parallelogram(double a, double b, double angle) {
    _name = "Parallelogram";
    _a = a;
    _b = b;
    _angle = angle;
}

double Parallelogram::calculateP() const{
    return 2 * (_a + _b);
}

double Parallelogram::calculateS() const {
    return std::sin(_angle) * _a * _b;
}

