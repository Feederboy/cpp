#include "HumanA.class.hpp"

HumanA::HumanA(std::string name)
{
    this->_name = name;
    return ;
}

HumanA::HumanA(std::string name, Weapon &weapon)
{
    this->_name = name;
    this->_weapon = &weapon;
}
{
    this->_name = name;
    return ;
}

HumanA::~HumanA()
{
    return ;
}

void    HumanA::set_weapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}

void    HumanA::attack()
{
    std::cout << this->_name << "attacks with their" << this->_weapon.getType() << std::endl;
}
