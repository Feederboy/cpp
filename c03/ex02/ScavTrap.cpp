#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->_hitpoints = 100;
    this->_energypoints = 50;
    this->_attackdamage = 20;
    this->_gatekeeper = false;
    std::cout << "Scav Constructor called for -no name assigned- " << std::endl;
    return ;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    this->_hitpoints = 100;
    this->_energypoints = 50;
    this->_attackdamage = 20;
    this->_gatekeeper = false;
    std::cout << "Scav Constructor called for " << this->_name << std::endl;
    return ;
}

ScavTrap::ScavTrap(ScavTrap const &cpy): ClapTrap(cpy)
{
    std::cout << "Copy constructor called" << std::endl;
    return ;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Scav Destructor called" << std::endl;
    return ;
}


ScavTrap & ScavTrap::operator=(ScavTrap const &rhs)
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

bool        ScavTrap::get_keep() const
{
    return (this->_gatekeeper);
}

void        ScavTrap::set_keep(bool b)
{
    this->_gatekeeper = b;
}

void       ScavTrap::attack(const std::string &target)
{
    if (this->get_energyPoints() > 0 && this->get_hitPoints() > 0)
    {
        std::cout << "ScavTrap " << this->get_name() << " attacks " << target << " causing " << this->get_attackDamage() << " damage !" << std::endl;
        this->_energypoints--;
    }
    else
        std::cout << "SCav Unable to do anything : No hitpoints or energy left !" << std::endl;
}

void        ScavTrap::guardGate()
{
    if (this->_energypoints > 0 && this->_hitpoints > 0)
    {
        std::cout << this->get_name() << " is now gatekeeping !" << std::endl;
        this->set_keep(true);
    }
    else
        std::cout << "SCav Unable to do anything : No hitpoints or energy left !" << std::endl;
}