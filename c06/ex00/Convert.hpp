#ifndef CONVERT_HPP
#define CONVERT_HPP

# include <iostream>
# include <ios>
# include <iomanip>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <limits>

# define CHAR 1
# define INT 2
# define DOUBLE 3
# define FLOAT 4
# define ERROR 5

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
        void    aff_char();
        void    aff_int();
        double  to_double(char *str);
        void    aff_double();
        



};

#endif
