#include "Fixed.class.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_val = 0;
    return ;
}

Fixed::Fixed(Fixed const &rhs)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = rhs;
    return ;
}

Fixed::~Fixed()
{
    std::cout << "Default destructor called" << std::endl;
    return ;
}

Fixed & Fixed::operator=(Fixed const &rhs)
{
    std::cout << "Copy assignement operator called" << std::endl;
    if (this != &rhs)
        this->_val = rhs.getRawBits();
    return (*this);

}

int     Fixed::getRawBits() const
{
    std::cout << "getRawBits() called" << std::endl;
    return (this->_val);
}

void    Fixed::setRawBits(int const v)
{
    std::cout << "setRawBits() called" << std::endl;
    this->_val = v;
}