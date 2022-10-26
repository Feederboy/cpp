#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Default Cat constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "cat destructor called" << std::endl;
}

Cat::Cat(Cat const &cpy): Animal(cpy)
{
    std::cout << "Cat copy construcotr called" << std::endl;
    return ;
}

Cat const & Cat::operator=(Cat const &rhs)
{
    if (this != &rhs)
        this->type = rhs.type;
    return (*this);
}

void    Cat::makeSound() const
{
    std::cout << "MEOW ! Cat makesond() called" << std::endl;
}