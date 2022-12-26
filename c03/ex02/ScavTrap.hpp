#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <math.h>

class ScavTrap : public ClapTrap{

    public:
        ScavTrap();
        ScavTrap(std::string name);
        ~ScavTrap();
        ScavTrap(ScavTrap const &cpy);
        ScavTrap &operator=(ScavTrap const &rhs);

        bool            get_keep() const;
        void            set_keep(bool b);

        void            guardGate();
        void            attack(const std::string &target);
    
    private:
        bool    _gatekeeper;

};

#endif