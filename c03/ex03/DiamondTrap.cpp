#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), FragTrap(name), ScavTrap(name)
{
    this->_name = name;
    this->_hitpoints = 100;
    this->_energypoints = 50;
    this->_attackdamage = 20;
    std::cout << "DiamondTrap Constructor called for " << this->_name << std::endl;
    return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const &cpy) : ClapTrap(cpy), FragTrap(cpy), ScavTrap(cpy)
{
    this->_hitpoints = cpy._hitpoints;
    this->_energypoints = cpy._energypoints;
    this->_attackdamage = cpy._attackdamage;
    this->_name = cpy._name;
   std::cout << "DiamondTrap Copy constructor called" << std::endl;
   return ;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor called for " << this->_name << std::endl;
    return ;
}


DiamondTrap & DiamondTrap::operator=(DiamondTrap const &rhs)
{
    if (this != &rhs)
    {
        this->_name = rhs.get_name();
        this->_hitpoints = rhs.get_hitPoints();
        this->_energypoints = rhs.get_energyPoints();
        this->_attackdamage = rhs.get_attackDamage();
    }
    return (*this);
}

void        DiamondTrap::whoAmI()
{
    std::cout << "I am " << this->_name << " built from " << ClapTrap::_name << std::endl;
}