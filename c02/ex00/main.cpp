#include "Fixed.class.hpp"

int main()
{
    std::cout << "A" << std::endl;
    Fixed a;
    std::cout << "B(A)" << std::endl;
    Fixed b(a);
    std::cout << "C" << std::endl;
    Fixed c;
    std::cout << "C=B" << std::endl;
    c = b;

    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

    return (0);
}