#include "HumanA.class.hpp"
#include "HumanB.class.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("Some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.set_weapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }

    return (0);
    


}