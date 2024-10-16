#include "ClapTrap.hpp"

ClapTrap::ClapTrap():
_hitpoints(10), _energypoints(10), _attackdamage(0)
{
    std::cout << "Constructor called for -no name assigned-" << std::endl;
    return ;
}

ClapTrap::ClapTrap(std::string name):
_name(name), _hitpoints(10), _energypoints(10), _attackdamage(0)
{
    std::cout << "ClapTrap Constructor called for " << this->_name << std::endl;
    return ;
}

ClapTrap::ClapTrap(ClapTrap const &cpy):
_name(cpy._name), _hitpoints(cpy._hitpoints), _energypoints(cpy._energypoints), _attackdamage(cpy._attackdamage)
{
    std::cout << "Copy constructor called" << std::endl;
    return ;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called"<< std::endl;
    return ;
}


ClapTrap & ClapTrap::operator=(ClapTrap const &rhs)
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
std::string     ClapTrap::get_name() const
{
    return (this->_name);
}

int     ClapTrap::get_hitPoints() const
{
    return (this->_hitpoints);
}

int     ClapTrap::get_energyPoints() const
{
    return (this->_hitpoints);
}

int     ClapTrap::get_attackDamage() const
{
    return (this->_attackdamage);
}

void    ClapTrap::setname(std::string name)
{
    this->_name = name;
}

void    ClapTrap::sethitPoints(int n)
{
    this->_hitpoints = n;
}

void    ClapTrap::setenergyPoints(int n)
{
    this->_energypoints = n;
}

void    ClapTrap::setattackDamage(int n)
{
    this->_attackdamage = n;
}


void       ClapTrap::attack(const std::string &target)
{
    if (this->get_energyPoints() > 0 && this->get_hitPoints() > 0)
    {
        std::cout << "ClapTrap " << this->get_name() << " attacks " << target << " causing " << this->get_attackDamage() << " damage !" << std::endl;
        this->_energypoints--;
    }
    else
        std::cout << "Unable to do anything : No hitpoints or energy left !" << std::endl;
}

void       ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitpoints > 0)
    {
        std::cout << "ClapTrap " << this->get_name() << " lost " << amount << " hitpoints !" << std::endl;
        if (this->_hitpoints - amount < 0)
            this->_hitpoints = 0;
        else
            this->_hitpoints -= amount;
    }
    else
        std::cout << "Stop it ! He's already dead !" << std::endl;
}

void        ClapTrap::beRepaired(unsigned int amount)
{
    if (this->get_energyPoints() > 0 && this->get_hitPoints() > 0)
    {
        std::cout << "ClapTrap " << this->get_name() << " healed for " << amount << " hitpoints !" << std::endl;
        this->_hitpoints += amount;
        this->_energypoints--;
    }
    else
        std::cout << "Unable to do anything : No hitpoints or energy left !" << std::endl;
}