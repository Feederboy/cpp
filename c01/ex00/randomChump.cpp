#include "Zombie.class.hpp"

void    randomChump(std::string name)
{
    Zombie z(name);

    z.announce();
    return ;
}