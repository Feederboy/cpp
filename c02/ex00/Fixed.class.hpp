#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

class Fixed
{
    private:
        int                 _val;
        static const int    _bits = 8;
    
    public:
        Fixed();
        Fixed(Fixed const &cpy);
        ~Fixed();
        Fixed & operator=(Fixed const &rhs);
        int getRawBits() const;
        void    setRawBits(int const v);
};

#endif