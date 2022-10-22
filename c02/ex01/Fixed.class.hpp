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
        
};

std::ostream & operator<<(std::ostream &o, Fixed const &rhs);

#endif