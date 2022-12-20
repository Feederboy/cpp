#include "Fixed.class.hpp"

int	main()
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	std::cout << "a " << a << std::endl;
	std::cout << "a " << ++a << std::endl;
	std::cout << "a " << a << std::endl;
	std::cout << "a " << a++ << std::endl;
	std::cout << "a " << a << std::endl;
	std::cout << "b " << b << std::endl;
	std::cout << "max " << Fixed::max(a, b) << std::endl;
	std::cout << "min " << Fixed::min(a, b) << std::endl;
	std::cout << "a + b " << a + b << std::endl;
	std::cout << "a - b " << a - b << std::endl;
	std::cout << "a * b " << a * b << std::endl;
	std::cout << "a +fixed(20) / b " << a + Fixed(20) / b << std::endl;
	return 0;
}