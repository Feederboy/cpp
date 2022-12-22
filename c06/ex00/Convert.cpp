#include "Convert.hpp"


//construct
Convert::Convert()
{
}

Convert::Convert(char *str) : tmp(str)
{
    std::string arg(tmp);
    this->type = this->getType(arg);
    std::cout << "type = " << this->type << std::endl;
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

int     Convert::getType(std::string str)
{
    if ((str.length() == 1) &&
		(std::isprint(static_cast<int>(str[0]))) &&
		!(std::isdigit(static_cast<int>(str[0]))))
	{
		return (CHAR);
	}
	else if ((str.find(".") != std::string::npos) ||
			(str.find("nan") != std::string::npos) ||
			(str.find("inf") != std::string::npos))
	{
		if ((*(str.end() - 1) == 'f') && (*(str.end() - 2) != 'n'))
		{
			return (FLOAT);
		}
		return (DOUBLE);
	}
	return (INT);
}
