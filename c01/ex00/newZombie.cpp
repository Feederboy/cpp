#include "Zombie.class.hpp"

Zombie*     newZombie(std::string name)
{
    Zombie *z = new Zombie(name);
    z->announce();
    return (z);
}