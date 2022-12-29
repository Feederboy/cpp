#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "default animal comnstructor called" << std::endl;
}

Animal::Animal(std::string type): type(type)
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(Animal const &cpy):
type(cpy.type)
{
    std::cout << "Animal copy construcotr called" << std::endl;
    return ;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal const & Animal::operator=(Animal const &cpy)
{
    std::cout << "Animal copy comnstructor called" << std::endl;
    if (this != &cpy)
    {
        this->type = cpy.type;
    }
    return (*this);
}

std::string     Animal::getType() const
{
    return (this->type);
}

void            Animal::makeSound() const
{
    std::cout << "No sound defined for Animal" << std::endl;
}