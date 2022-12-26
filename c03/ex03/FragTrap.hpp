#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <math.h>

class FragTrap : virtual public ClapTrap{

    public:
        FragTrap();
        FragTrap(std::string name);
        ~FragTrap();
        FragTrap(FragTrap const &cpy);
        FragTrap &operator=(FragTrap const &rhs);

        void            highFivesGuys();
    

};

#endif