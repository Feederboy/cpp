#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    this->brain = new Brain();
    std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(Cat const &cpy): Animal(cpy)
{
    this->type = cpy.type;
    this->brain = new Brain(*cpy.brain);
    std::cout << "Cat copy construcotr called" << std::endl;
    return ;
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "Cat destructor called" << std::endl;
}

Cat const & Cat::operator=(Cat const &rhs)
{
    if (this != &rhs)
    {
        delete this->brain;
        this->type = rhs.type;
        this->brain = new Brain();
        *this->brain = *rhs.getBrain();
    }
    std::cout << "Cat operator called" << std::endl;
    return (*this);
}

Brain*  Cat::getBrain() const
{
    return (this->brain);
}

void    Cat::makeSound() const
{
    std::cout << "MEOW ! Cat makesond() called" << std::endl;
}