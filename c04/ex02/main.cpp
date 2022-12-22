#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

// int		main()
// {
// 	const Animal 		*tab[10];
	

// 	std::cout << std::endl << "````DEBUT DES TESTS````" << std::endl << std::endl;
// 	std::cout << ">>> DEBUT CREATION CAT" << std::endl;
// 	for (int i = 0; i < 5; i++)
// 	{
// 		std::cout << std::setw(30) << std::string(30, '-') << std::endl;
// 		std::cout << "item: " << i << std::endl;
// 		tab[i] = new Cat;
// 		std::cout << std::setw(30) << std::string(30, '-') << std::endl;
// 	}
// 	std::cout << ">>> DEBUT CREATION DOG" << std::endl << std::endl;
// 	for (int i = 5; i < 10; i++)
// 	{
// 		std::cout << std::setw(30) << std::string(30, '-') << std::endl;
// 		std::cout << "item: " << i << std::endl;
// 		tab[i] = new Dog;
// 		std::cout << std::setw(30) << std::string(30, '-') << std::endl;
// 	}
// 	std::cout << ">>> DEBUT DESTRUCTION" << std::endl << std::endl;
// 	for (int i = 0; i < 10; i++)
// 	{
// 		std::cout << std::setw(30) << std::string(30, '-') << std::endl;
// 		std::cout << "item: " << i << std::endl;
// 		delete tab[i];
// 		std::cout << std::setw(30) << std::string(30, '-') << std::endl;
// 	}

// 	return (0);
// }

int	main()
{
	Dog	basic;
	Cat	bb;
	{
		Cat tt = bb;
		Dog tmp = basic;
		std::cout << (tt.getBrain()) << std::endl;
		std::cout << (bb.getBrain()) << std::endl;
	}


	Animal *arr[10];
	int	i;
	
	i = 0;
	while (i < 10)
	{
		std::cout << i << "<---------------------" << std::endl;
		if (i < 5)
		{
			arr[i] = new Dog();
		}
		else
			arr[i] = new Cat();
		i++;
	}
	i = 0;
	while (i < 10)
	{
		std::cout << i << "<---------------------" << std::endl;
		delete arr[i++];
	}
}