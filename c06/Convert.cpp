#include "Convert.hpp"


//construct
Convert::Convert()
{
}

Convert::Convert(char *str) : base(str)
{
 //a completer
}

Convert::~Convert()
{
    std::cout << "Convert destructor called" << std::endl;
}

Convert::Convert(Convert const &cpy):
i(cpy.i), c(cpy.c), d(cpy.d), f(cpy.f)
{
    std::cout << "Convert copy construcotr called" << std::endl;
    return ;
}


Convert const & Convert::operator=(Convert const &cpy)
{

    if (this != &cpy)
    {
        this->i = cpy.i;
        this->c = cpy.c;
        this->d = cpy.d;
        this->f = cpy.f;
    }
    std::cout << "Convert copy constructor called" << std::endl;
    return (*this);
}




//getters

int	Convert::get_int() const
{
	return this->i;
}
char	Convert::get_char() const
{
	return this->c;
}

double	Convert::get_double() const
{
	return this->d;
}


float	Convert::get_float() const
{
	return this->f;
}

