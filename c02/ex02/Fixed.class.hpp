#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <math.h>

class Fixed
{
    private:
        int                 _val;
        static const int    _bits = 8;
    
    public:
        Fixed();
        Fixed(int const val);
        Fixed(float const val);
        Fixed(Fixed const &cpy);
        ~Fixed();
        Fixed & operator=(Fixed const &rhs);
        int getRawBits() const;
        void    setRawBits(int const v);
        float   toFloat() const;
        int        toInt() const;


        static Fixed &      min(Fixed &lhs, Fixed &rhs);
        static Fixed &      max(Fixed &lhs, Fixed &rhs);
        static const Fixed &      min(const Fixed &lhs, const Fixed &rhs);
        static const Fixed &      max(const Fixed &lhs, const Fixed &rhs);

        bool    operator>(Fixed const &rhs) const;
        bool    operator<(Fixed const &rhs) const;
        bool    operator>=(Fixed const &rhs) const;
        bool    operator<=(Fixed const &rhs) const;
        bool    operator==(Fixed const &rhs) const;
        bool    operator!=(Fixed const &rhs) const;

        Fixed   operator*(Fixed const &rhs);
        Fixed   operator+(Fixed const &rhs);
        Fixed   operator-(Fixed const &rhs);
        Fixed   operator/(Fixed const &rhs);

        Fixed   operator++();
        Fixed   operator++(int);
        Fixed   operator--();
        Fixed   operator--(int);


};

std::ostream & operator<<(std::ostream &o, Fixed const &rhs);

#endif