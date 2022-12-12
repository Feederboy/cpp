#ifndef CONVERT_HPP
#define CONVERT_HPP

# include <iostream>
# include <ios>
# include <iomanip>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <limits>

class Convert
{
    private:
        int i;
        char c;
        double d;
        float f;
        char *base;

    public:
        //construct
        Convert();
        Convert(std::string name, int grade);
        ~Convert();
        Convert(Convert const &cpy);
        Convert const &operator=(Convert const &rhs);

        //getters
        int get_int() const;
        char get_char() const;
        double get_double() const;
        float get_float() const;

        //Convert



};

#endif