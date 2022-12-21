#include "ScavTrap.hpp"

int	main()
{
	ClapTrap clap("clap");
	ScavTrap scav("scav");

	scav.attack("someone");
	scav.beRepaired(3);
	scav.takeDamage(2);
	scav.guardGate();
	clap.attack("someoneelse");
	clap.beRepaired(4);
	clap.takeDamage(2);
}