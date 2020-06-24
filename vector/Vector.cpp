#include "Vector.hpp"

#include <cmath>

Vector::Vector(double x, double y) :
        x(x),
        y(y)
{
}

std::string Vector::toString()
{
    return "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
}

double Vector::getLength() const
{
    return sqrt(x * x + y * y);
}

double Vector::getX() const
{
    return x;
}

double Vector::getY() const
{
    return y;
}
