#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main()
{
	ClapTrap clap("clap");
	ScavTrap scav("scav");
	FragTrap frag("frag");
	DiamondTrap	diam("diam");



	diam.whoAmI();
	diam.highFivesGuys();
	diam.guardGate();
	diam.beRepaired(2);
	std::cout << std::endl;
	frag.highFivesGuys();
	scav.attack("someone");
	scav.beRepaired(3);
	scav.takeDamage(2);
	clap.attack("someoneelse");
	clap.beRepaired(4);
	clap.takeDamage(2);
}