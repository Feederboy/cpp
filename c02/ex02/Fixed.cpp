#include "Fixed.class.hpp"

Fixed::Fixed()
{
    // std::cout << "Default constructor called" << std::endl;
    this->_val = 0;
    return ;
}

Fixed::Fixed(int const val)
{
    // std::cout << "Int constructor called" << std::endl;
    this->_val = (val * (1 << this->_bits));
}

Fixed::Fixed(float const val)
{
    // std::cout << "Float constructor called" << std::endl;
    this->_val = floor(0.5 + (val * (1 << this->_bits)));
}

Fixed::Fixed(Fixed const &rhs)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = rhs;
    return ;
}

Fixed::~Fixed()
{
    // std::cout << "Default destructor called" << std::endl;
    return ;
}

Fixed & Fixed::operator=(Fixed const &rhs)
{
    // std::cout << "Copy assignement operator called" << std::endl;
    if (this != &rhs)
        this->_val = rhs.getRawBits();
    return (*this);

}

int     Fixed::getRawBits() const
{
    // std::cout << "getRawBits() called" << std::endl;
    return (this->_val);
}

void    Fixed::setRawBits(int const v)
{
    // std::cout << "setRawBits() called" << std::endl;
    this->_val = v;
}

float   Fixed::toFloat() const
{
    return ((float)this->_val / (float)(1 << (this->_bits)));
}

int     Fixed::toInt() const
{
    return (this->_val / (1 << (this->_bits)));
}

std::ostream & operator<<(std::ostream &o, Fixed const &rhs)
{
    o << rhs.toFloat();
    return (o);
}


/*------ MIN ET MAX --------*/


Fixed   &   Fixed::min(Fixed &lhs, Fixed &rhs)
{
    if (lhs > rhs)
        return (rhs);
    return (lhs);
}

const Fixed   &   Fixed::min(const Fixed &lhs, const Fixed &rhs)
{
    if (lhs > rhs)
        return (rhs);
    return (lhs);
}

Fixed   &   Fixed::max(Fixed &lhs, Fixed &rhs)
{
    if (lhs > rhs)
        return (lhs);
    return (rhs);
}

const Fixed   &   Fixed::max(const Fixed &lhs, const Fixed &rhs)
{
    if (lhs > rhs)
        return (lhs);
    return (rhs);
}

/*---------- COMPARAISONS -----------*/

bool    Fixed::operator>(Fixed const &rhs) const
{
    return (this->toFloat() > rhs.toFloat());
}

bool    Fixed::operator<(Fixed const &rhs) const
{
    return (this->toFloat() < rhs.toFloat());
}

bool    Fixed::operator>=(Fixed const &rhs) const
{
    return (this->toFloat() >= rhs.toFloat());
}

bool    Fixed::operator<=(Fixed const &rhs) const
{
    return (this->toFloat() <= rhs.toFloat());
}

bool    Fixed::operator==(Fixed const &rhs) const
{
    return (this->toFloat() == rhs.toFloat());
}

bool    Fixed::operator!=(Fixed const &rhs) const
{
    return (this->toFloat() != rhs.toFloat());
}


/*---------- ARITHMETIQUE ----------*/

Fixed   Fixed::operator*(Fixed const &rhs)
{
    Fixed res(this->toFloat() * rhs.toFloat());

    return (res);
}

Fixed   Fixed::operator-(Fixed const &rhs)
{
    Fixed res(this->toFloat() - rhs.toFloat());

    return (res);
}

Fixed   Fixed::operator+(Fixed const &rhs)
{
    Fixed res(this->toFloat() + rhs.toFloat());

    return (res);
}

Fixed   Fixed::operator/(Fixed const &rhs)
{
    Fixed res(this->toFloat() / rhs.toFloat());

    return (res);
}

/*--------- INCREMENTATIO N / DECREMENTATION ----------*/

Fixed   Fixed::operator++()
{
    this->_val++;
    return (*this);
}

Fixed   Fixed::operator++(int)
{
    Fixed res(*this);

    operator++();
    return (res);
}

Fixed   Fixed::operator--()
{
    this->_val--;
    return (*this);
}

Fixed   Fixed::operator--(int)
{
    Fixed res(*this);

    operator--();
    return (res);
}