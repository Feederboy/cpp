#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <math.h>

class Animal{
    protected:
        std::string type;

    public:
        Animal();
        Animal(std::string type);
        virtual ~Animal();
        Animal(Animal const &cpy);
        Animal const &operator=(Animal const &rhs);

        virtual void    makeSound() const;
        std::string     getType() const;

};

#endif