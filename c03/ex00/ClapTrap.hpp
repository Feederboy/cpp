#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <math.h>

class ClapTrap{
    private:
        std::string _name;
        int         _hitpoints;
        int         _energypoints;
        int         _attackdamage;

    public:
        ClapTrap(std::string name);
        ~ClapTrap();
        ClapTrap(ClapTrap const &cpy);
        ClapTrap &operator=(ClapTrap const &rhs);

        std::string     get_name() const;
        int             get_hitPoints() const;
        int             get_energyPoints() const;
        int             get_attackDamage() const;
        void            attack(const std::string &target);
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);
        void            setname(std::string name);
        void            sethitPoints(int n);
        void            setenergyPoints(int n);
        void            setattackDamage(int n);

};

#endif