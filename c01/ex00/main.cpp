#include "Zombie.class.hpp"

int main()
{
    Zombie *z1 = new Zombie("z1");

    std::cout << "Manually deleting z1" << std::endl;
    delete z1;
    randomChump("z3");
    return (0);
}