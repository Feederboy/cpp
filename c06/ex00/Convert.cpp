#include "Convert.hpp"


//construct
Convert::Convert()
{
    this->tmp = NULL;
}

Convert::Convert(char *str) : tmp(str)
{
    char ttmp;
    ttmp = 0;
    std::string arg(tmp);
    impossible = false;
    int_impossible = false;
    this->type = this->getType(arg);
    std::cout << "TYPE = " << this->type << std::endl;
    if (this->type == 1)
    {
        ttmp = tmp[0];
        this->d = static_cast<double>(ttmp);
    }
    else if (this->type == 2)
    {
        this->d = static_cast<int>(std::atof(str));
    }
    else if (this->type == 3)
        this->d = to_double(str);
    else if (this->type == 4)
    {
        this->d = to_float(str);
        // this->d = std::atof(str);
    }
    else if (this->type == 5)
    {
        impossible = true;
    }
    else if (this->type == 8)
    {
        this->d = to_float(str);
    }
    else if (this->type == 6 || this->type == 7)
    {
        int_impossible = true;
        this->d = to_double(str);
    }
    return ;
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

int     Convert::getType(std::string str) const
{
    const char *sstr = str.c_str();

    if ((str.length() == 1) &&
		(std::isprint(static_cast<int>(str[0]))) &&
		!(std::isdigit(static_cast<int>(str[0]))))
	{
		return (CHAR);
	}
    else if (strDigit(str) || !strcmp(sstr, "nan") ||
        !strcmp(sstr, "nanf") || !strcmp(sstr, "+inf") ||
        !strcmp(sstr, "+inff") || !strcmp(sstr, "-inf") || !strcmp(sstr, "-inff"))
    {
	    if ((str.find(".") != std::string::npos) ||
			(str.find("nan") != std::string::npos) ||
			(str.find("inf") != std::string::npos))
	    {
		    if ((*(str.end() - 1) == 'f') && (*(str.end() - 2) != 'n'))
		    {
                if (std::atof(str.c_str()) > std::numeric_limits<float>::max() 
                || std::atof(str.c_str()) < std::numeric_limits<float>::min())
                {
                    std::cout << "ICI1" << std::endl;
                    return (ERROR);
                }
	    	    return (FLOAT);
	    	}
	    }
        if (std::atof(str.c_str()) <= std::numeric_limits<double>::max() 
            || std::atof(str.c_str()) >= std::numeric_limits<double>::min())
            {
                if (std::atof(str.c_str()) > std::numeric_limits<int>::max() 
                || std::atof(str.c_str()) < std::numeric_limits<int>::min())
                    {
                        return (ERROR_INT);
                    }
                return (DOUBLE);
            }
	        return (ERROR_NAN);
    }
    return (ERROR);
}


bool      Convert::strDigit(std::string str) const
{
    bool    point = false;
    size_t     i = 0;

    if (str[i] == '+' || str[i] == '-')
        i++;
    if (str[i] == '.')
    {

        return false;
    }
    while (str[i])
    {
        if (str[i] == '.' && !point)
            point = true;
        else if (!std::isdigit(str[i]) && (str[i] != '.' || point))
        {
            break;
        }        
        i++;
    }
    if (str.size() == i + 1  && str[i] == 'f')
    {
        return true;
    }
    else if (str.size() == i)
        return true;
    return false;
}

void    Convert::aff_char()
{
    std::cout << "char: ";
    try
    {
        if (this->impossible)
            throw Convert::ImpossibleException();            
        if (d <= std::numeric_limits<char>::max() && d >= std::numeric_limits<char>::min())
        {
            this->c = static_cast<char>(this->d);
        }
        else
            throw Convert::ImpossibleException();
        if (std::isprint(c))
            std::cout << c << std::endl;
        else
            throw Convert::NonDisplayableException();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void    Convert::aff_int()
{
    std::cout << "int: ";
    try
    {
        if (this->int_impossible || this->impossible)
        {
            throw Convert::ImpossibleException();
        }      
        this->i = static_cast<int>(this->d);
        std::cout << this->i << std::endl;
    }           
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void    Convert::aff_double()
{
    std::cout << "double: ";
    try
    {
        if (this->impossible)
        {
            throw Convert::ImpossibleException();
        }
        std::cout << std::setprecision(1) << std::fixed << this->d << '\n';
    }           
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void    Convert::aff_float()
{
    std::cout << "float: ";
    try
    {
        if (this->impossible)
        {
            throw Convert::ImpossibleException();
        }
        std::cout << std::setprecision(1) << std::fixed << this->d << "f\n";
    }           
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

double  Convert::to_double(char *str)
{
    if (!strcmp(str, "nan") || !strcmp(str, "nanf"))
    {
        this->d = std::numeric_limits<double>::quiet_NaN();
    }
    else if (!strcmp(str, "+inf") || !strcmp(str, "+inff"))
    {
        this->d = std::numeric_limits<double>::infinity();
    }
    else if (!strcmp(str, "-inf") || !strcmp(str, "-inff"))
    {
        std::cout << "TO_DOUBLE 1" << std::endl;
        this->d = -std::numeric_limits<double>::infinity();
    }
    else if (!this->impossible)
        this->d = static_cast<double>(atof(str));
    return (this->d);
}

float  Convert::to_float(char *str)
{
    std::cout << "TO_FLOAT STR = " << str << std::endl;
    if (!strcmp(str, "nan") || !strcmp(str, "nanf"))
    {
        this->d = std::numeric_limits<double>::quiet_NaN();
    }
    else if (!strcmp(str, "+inf") || !strcmp(str, "+inff"))
    {
        this->d = std::numeric_limits<double>::infinity();
    }
    else if (!strcmp(str, "-inf") || !strcmp(str, "-inff"))
    {
        std::cout << "TO_FLOAT 1" << std::endl;
        this->d = -std::numeric_limits<double>::infinity();
    }
    else if (!this->impossible)
        this->d = static_cast<double>(atof(str));
    return (this->d);
}
