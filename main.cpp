#include <iostream>
#include "vector/Vector.hpp"

int main()
{
    std::cout << "Hello, Coding Standards!" << std::endl;

    Vector vector(2.0, 3.0);
    std::cout << "Vector " << vector.toString() << " has length equal to " << vector.getLength();

    return 0;
}
