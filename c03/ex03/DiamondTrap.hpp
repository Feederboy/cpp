#ifndef DIAMOND_HPP
#define DIAMOND_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <math.h>

class DiamondTrap : public FragTrap, public ScavTrap{

    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        ~DiamondTrap();
        DiamondTrap(DiamondTrap const &cpy);
        DiamondTrap &operator=(DiamondTrap const &rhs);

        void    whoAmI();
    
    private:
        std::string    _name;

};

#endif