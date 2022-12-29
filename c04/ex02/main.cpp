#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main()
{
	Dog	basic;
	Cat	bb;
	{
		std::cout << std::endl;
		Cat tt = bb;
		std::cout << std::endl;
		Dog tmp = basic;
		std::cout << std::endl;
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