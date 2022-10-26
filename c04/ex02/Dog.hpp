#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
    private:
        Brain *brain;
    public:
        Dog();
        Dog(Dog const &cpy);
        ~Dog();
        Dog const & operator=(Dog const &cpy);

        Brain   *getBrain() const;
        void    makeSound() const;
};

#endif