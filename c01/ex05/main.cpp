#include "Harl.class.hpp"

int		main(int argc, char **argv)
{
	Harl	obj;
	if (argc != 2)
		std::cout << "Bad format" << std::endl;
	else
	{
		obj.complain(argv[1]);
	}
	return (0);
}