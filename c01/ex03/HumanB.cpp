#include "HumanB.class.hpp"

HumanB::HumanB(std::string name)
{
    this->_name = name;
    return ;
}

HumanB::~HumanB()
{
    return ;
}

void    HumanB::set_weapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}

void    HumanB::attack()
{
    std::cout << this->_name << "attacks with their " << this->_weapon->getType() << std::endl;
    return ;
}
