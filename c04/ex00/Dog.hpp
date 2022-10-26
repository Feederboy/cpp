#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
    public:
        Dog();
        Dog(Dog const &cpy);
        ~Dog();
        Dog const & operator=(Dog const &cpy);

        void    makeSound() const;
};

#endif