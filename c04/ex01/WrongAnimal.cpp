#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "default WrongAnimal comnstructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): type(type)
{
    std::cout << "WrongAnimal comnstructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &cpy):
type(cpy.type)
{
    std::cout << "WrongAnimal copy construcotr called" << std::endl;
    return ;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal const & WrongAnimal::operator=(WrongAnimal const &cpy)
{
    std::cout << "WrongAnimal copy comnstructor called" << std::endl;
    if (this != &cpy)
    {
        this->type = cpy.type;
    }
    return (*this);
}

std::string     WrongAnimal::getType() const
{
    return (this->type);
}

void            WrongAnimal::makeSound() const
{
    std::cout << "WrongANimal sound" << std::endl;
}