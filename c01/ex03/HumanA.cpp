#include "HumanA.class.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
}

HumanA::~HumanA()
{
    return ;
}

void    HumanA::attack()
{
    std::cout << this->_name << "attacks with their " << this->_weapon.getType() << std::endl;
    return ;
}
