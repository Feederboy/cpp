#include "Zombie.class.hpp"

int main()
{
    Zombie  *first;

    first = zombieHorde(6, "jako");
    for (int i = 0; i < 6; i++)
        first[i].announce();
    delete[] first;
    return (0);
}