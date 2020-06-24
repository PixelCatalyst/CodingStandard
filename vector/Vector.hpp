#ifndef CODINGSTANDARD_VECTOR
#define CODINGSTANDARD_VECTOR

#include <string>

class Vector
{
private:
    double x;
    double y;
public:
    Vector(double x, double y);

    std::string toString();

    double getX() const;

    double getY() const;

    double getLength() const;
};

#endif //CODINGSTANDARD_VECTOR
