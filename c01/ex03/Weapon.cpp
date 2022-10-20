#include "Weapon.class.hpp"

Weapon::Weapon()
{
    return ;
}

Weapon::~Weapon()
{
    return ;
}

Weapon::Weapon(std::string type)
{
    this->_type = type;
    return ;
}

std::string     Weapon::getType() const
{
    return (this->_type);
}

void            Weapon::setType(std::string type)
{
    this->_type = type;
}