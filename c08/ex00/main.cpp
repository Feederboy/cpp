#include "easyfind.hpp"

int		main()
{
	std::vector<int>	tab;

	////////////////////////////////////////////////////////////////////////////////
	/* Fill tab */
	tab.push_back(42);
	tab.push_back(0);
	tab.push_back(24);
	tab.push_back(12);
	tab.push_back(32);

	////////////////////////////////////////////////////////////////////////////////
	/* Failed Test Find */
	
	std::cout << "==== FAILED ONE ====" << std::endl << std::endl;
	try
	{
		std::cout << easyfind(tab, 33) << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}

	
	////////////////////////////////////////////////////////////////////////////////
	/* Succes Test Find */
	
	std::cout << "==== SUCCED ONE ====" << std::endl << std::endl;
	try
	{
		std::cout << easyfind(tab, 24) << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}