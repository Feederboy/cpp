#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <math.h>

class WrongAnimal{
    protected:
        std::string type;

    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        virtual ~WrongAnimal();
        WrongAnimal(WrongAnimal const &cpy);
        WrongAnimal const &operator=(WrongAnimal const &rhs);

        void    makeSound() const;
        std::string     getType() const;

};

#endif