#include <iostream>
#include "Array.hpp"

int		main()
{
	unsigned int		nb = 4;
	unsigned int		nb_2 = 8;
	Array<std::string>	test_0(3);
	Array<int>			test_1(nb);
	Array<int>			test_2(nb_2);
	
	std::cout << std::endl;

	///////////////////////////////////////////////////////////////////////////////

	std::cout << "----USE OF SIZE FCTN + PRINT----" << std::endl << std::endl;

	std::cout << "size: " << test_0.size() << std::endl;
	std::cout << "size: " << test_1.size() << std::endl;
	std::cout << std::endl;
	
	try
	{
		for (int i = 0; i < 6; i++)
		{
			std::cout << "value num [" << i << "]: " << test_1[i] << std::endl;
		}
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	///////////////////////////////////////////////////////////////////////////////

	std::cout << "----OPERATOR = + PRINT----" << std::endl << std::endl;
	
	test_1 = test_2;
	try
	{
		for (int i = 0; i < 100; i++)
		{
			std::cout << "value num [" << i << "]: " << test_1[i] << std::endl;
		}
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	///////////////////////////////////////////////////////////////////////////////

	std::cout << "----COPY CONSTRUCTOR + PRINT----" << std::endl << std::endl;

	Array<int>		test_3(test_2);

	try
	{
		for (int i = 0; i < 100; i++)
		{
			std::cout << "value num [" << i << "]: " << test_1[i] << std::endl;
		}
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "----STRINGGGGGGGGGGGGGG----" << std::endl << std::endl;
    try
	{
		for (int i = 0; i < 6; i++)
		{
            test_0[i] = "oui";
			std::cout << "value num [" << i << "]: " << test_0[i] << std::endl;
		}
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}



// #include <iostream>
// #include "Array.hpp"
// #include <cstdlib>

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
// 	std::cout << "ATATATATAT" << std::endl;
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
// 	std::cout << "ATATATATAT" << std::endl;
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

// 	std::cout << "ATATATATAT" << std::endl;
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }