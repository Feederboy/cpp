#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
    this->_hitpoints = 100;
    this->_energypoints = 50;
    this->_attackdamage = 20;
    std::cout << "Frag Constructor called for -no name assigned-" << std::endl;
    return ;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    this->_hitpoints = 100;
    this->_energypoints = 50;
    this->_attackdamage = 20;
    std::cout << "Frag Constructor called for " << this->_name << std::endl;
    return ;
}

FragTrap::FragTrap(FragTrap const &cpy): ClapTrap(cpy)
{
    std::cout << "Frag Copy constructor called" << std::endl;
    return ;
}

FragTrap::~FragTrap()
{
    std::cout << "Frag Destructor called" << std::endl;
    return ;
}


FragTrap & FragTrap::operator=(FragTrap const &rhs)
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

void        FragTrap::highFivesGuys()
{
    if (this->_energypoints > 0 && this->_hitpoints > 0)
    {
        std::cout << this->get_name() << " wants to highfive !" << std::endl;
    }
    else
        std::cout << "SCav Unable to do anything : No hitpoints or energy left !" << std::endl;
}