#ifndef CONVERT_HPP
#define CONVERT_HPP

# include <iostream>
# include <ios>
# include <iomanip>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <limits>
#  include <cmath>

# define CHAR 1
# define INT 2
# define DOUBLE 3
# define FLOAT 4
# define ERROR 5
# define ERROR_INT 6

class Convert
{
    private:
        int i;
        char c;
        double d;
        float f;
        char *tmp;
        int type;
        bool impossible;
        bool int_impossible;

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
        int getType(std::string str) const;
        bool    strDigit(std::string str) const;

    //exception
        class	NonDisplayableException : public std::exception
	{
		public :
			virtual const char	*what() const throw()
			{
				return ("Non displayable");
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
        void    aff_char();
        void    aff_int();
        int     to_int(char *str);
        double  to_double(char *str);
        float  to_float(char *str);
        void    aff_double();
        void    aff_float();
        



};

#endif
