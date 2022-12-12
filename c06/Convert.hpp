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
        Convert(char *str);
        ~Convert();
        Convert(Convert const &cpy);
        Convert const &operator=(Convert const &rhs);

        //getters
        int get_int() const;
        char get_char() const;
        double get_double() const;
        float get_float() const;

    //exception
        class	NonDisplayableException : public std::exception
	{
		public :
			virtual const char	*what() const throw()
			{
				return ("Not displayable");
			}
	};

      class	ImpossibleException : public std::exception
	{
		public :
			virtual const char	*what() const throw()
			{
				return ("Impossible");
			}
	};

        //Convert



};

#endif