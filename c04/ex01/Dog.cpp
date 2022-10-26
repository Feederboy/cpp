#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    this->brain = new Brain();
    std::cout << "Default dog constructor called" << std::endl;
}

Dog::Dog(Dog const &cpy): Animal(cpy)
{
    this->type = cpy.type;
    this->brain = new Brain(*cpy.brain);
    std::cout << "Dog copy construcotr called" << std::endl;
    return ;
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "Dog destructor called" << std::endl;
}

Dog const & Dog::operator=(Dog const &rhs)
{
    if (this != &rhs)
    {
        delete this->brain;
        this->type = rhs.type;
        this->brain = new Brain();
        *this->brain = *rhs.getBrain();
    }
    std::cout << "Dog operator called" << std::endl;
    return (*this);
}

Brain*  Dog::getBrain() const
{
    return (this->brain);
}

void    Dog::makeSound() const
{
    std::cout << "WOOF ! Dog makesond() called" << std::endl;
}