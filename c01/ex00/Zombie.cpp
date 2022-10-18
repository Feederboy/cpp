#include "Zombie.class.hpp"

Zombie::Zombie(std::string name)
{
    std::cout << "ZOMBIE CREATED" << std::endl;
    this->_name = name;
    return ;
}

Zombie::~Zombie()
{
    std::cout << "ZOMBIE DELETED" << std::endl;
    return ;
}

void        Zombie::announce()
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}