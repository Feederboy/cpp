#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ClapTrap clap("clap");
	ScavTrap scav("scav");
	FragTrap frag("frag");

	frag.highFivesGuys();
	scav.attack("someone");
	scav.beRepaired(3);
	scav.takeDamage(2);
	clap.attack("someoneelse");
	clap.beRepaired(4);
	clap.takeDamage(2);
}