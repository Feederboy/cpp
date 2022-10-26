#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
    private:
        Brain *brain;
    public:
        Cat();
        Cat(Cat const &cpy);
        ~Cat();
        Cat const & operator=(Cat const &cpy);

        Brain   *getBrain() const;
        void    makeSound() const;
};

#endif