#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int		main()
{
	const Animal 		*tab[10];
	

	std::cout << std::endl << "````DEBUT DES TESTS````" << std::endl << std::endl;
	std::cout << ">>> DEBUT CREATION CAT" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << std::setw(30) << std::string(30, '-') << std::endl;
		std::cout << "item: " << i << std::endl;
		tab[i] = new Cat;
		std::cout << std::setw(30) << std::string(30, '-') << std::endl;
	}
	std::cout << ">>> DEBUT CREATION DOG" << std::endl << std::endl;
	for (int i = 5; i < 10; i++)
	{
		std::cout << std::setw(30) << std::string(30, '-') << std::endl;
		std::cout << "item: " << i << std::endl;
		tab[i] = new Dog;
		std::cout << std::setw(30) << std::string(30, '-') << std::endl;
	}
	std::cout << ">>> DEBUT DESTRUCTION" << std::endl << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << std::setw(30) << std::string(30, '-') << std::endl;
		std::cout << "item: " << i << std::endl;
		delete tab[i];
		std::cout << std::setw(30) << std::string(30, '-') << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	Dog basic;
	{
		Dog tmp = basic;
	}

	return (0);
}