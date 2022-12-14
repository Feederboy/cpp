#include "Zombie.class.hpp"

Zombie::Zombie(std::string name)
{
    this->_name = name;
    std::cout << "ZOMBIE CREATED " << this->_name << std::endl;
    return ;
}

Zombie::Zombie()
{
    std::cout << "ZOMBIE CREATED" << std::endl;
    return ;
}

Zombie::~Zombie()
{
    std::cout << "ZOMBIE DELETED " << this->_name << std::endl;
    return ;
}

void        Zombie::announce()
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void        Zombie::set_name(std::string name)
{
    this->_name = name;
}