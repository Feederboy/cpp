#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Default dog constructor called" << std::endl;
}

Dog::Dog(Dog const &cpy): Animal(cpy)
{
    std::cout << "Dog copy construcotr called" << std::endl;
    return ;
}

Dog::~Dog()
{
    std::cout << "DOg destructor called" << std::endl;
}

Dog const & Dog::operator=(Dog const &rhs)
{
    if (this != &rhs)
        this->type = rhs.type;
    return (*this);
}


void    Dog::makeSound() const
{
    std::cout << "WOOF ! Dog makesond() called" << std::endl;
}