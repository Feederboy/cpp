#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "Default WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &cpy): WrongAnimal(cpy)
{
    std::cout << "WrongCat copy construcotr called" << std::endl;
    return ;
}

WrongCat const & WrongCat::operator=(WrongCat const &rhs)
{
    if (this != &rhs)
        this->type = rhs.type;
    return (*this);
}

void    WrongCat::makeSound() const
{
    std::cout << "WRONG MEOW ! WrongCat makesond() called" << std::endl;
}