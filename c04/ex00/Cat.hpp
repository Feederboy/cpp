#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
    public:
        Cat();
        Cat(Cat const &cpy);
        ~Cat();
        Cat const & operator=(Cat const &cpy);

        void    makeSound() const;
};

#endif