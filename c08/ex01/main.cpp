#include "Span.hpp"

// typedef		std::vector<int>::iterator	vector_it;
// typedef		std::vector<int>			t_vect;

// int main()
// {
// 	Span	test_1(10);
// 	Span	test_2(0);
// 	Span	test_3(101); // modify this value for biggest test

// 	////////////////////////////////////////////////////////////////////////////////
// 	/* Test for Single Add */
	
// 	std::cout << "----ADD NUMBER----" << std::endl << std::endl;

// 	try 
// 	{
// 		std::cout << "=> test_1" << std::endl;
// 		test_1.addNumber(13);
// 		test_1.addNumber(500);
// 		test_1.addNumber(10);
// 		test_1.addNumber(56);
// 		test_1.addNumber(11);
// 		// std::cout << test_1;
// 		std::cout << "test_1 DONE" << std::endl;
// 	}
// 	catch (std::exception const &e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
// 	try 
// 	{
// 		std::cout << "=> test_2" << std::endl;
// 		test_2.addNumber(13);
// 		test_2.addNumber(500);
// 		test_2.addNumber(10);
// 		test_2.addNumber(56);
// 		test_2.addNumber(11);
// 		std::cout << test_2;
// 		std::cout << "test_2 DONE" << std::endl;
// 	}
// 	catch (std::exception const &e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}

// 	////////////////////////////////////////////////////////////////////////////////
// 	/* Test for Iterator plage Add */

// 	std::cout << "----MULTI ADDS---" << std::endl << std::endl;
// 	t_vect				tab_test;		

// 	test_3.addNumber(100); // Test if first value is erased
// 	for (int i = 0; i < 100; i++)
// 	{
// 		tab_test.push_back(i);
// 	}
// 	std::cout << std::endl;

// 	////////////////////////////////////////////////////////////////////////////////
// 	/* Shortest plage Test */
	
// 	std::cout << "----SHORTEST----" << std::endl << std::endl;

// 	try
// 	{
// 		std::cout << "shortest on test_1: " << test_1.shortestSpan() << std::endl;
// 	}
// 	catch (std::exception const &e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
// 	std::cout << std::endl;

// 	////////////////////////////////////////////////////////////////////////////////
// 	/* Longuest plage Test*/
	
// 	std::cout << "----LONGUEST----" << std::endl << std::endl;

// 	try
// 	{
// 		std::cout << "longest on test_1: " << test_1.longestSpan() << std::endl;
// 	}
// 	catch (std::exception const &e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
// 	std::cout << std::endl;

// 	return (0);
// }


// // #define SIZE 10000

// // int generateNumber(void)
// // {
// //     return std::rand();
// // }

// // std::vector<int>    createRandomVector(unsigned int nb)
// // {
// //     std::vector<int>    tab(nb);

// //     std::generate(tab.begin(),tab.end(), generateNumber);
// //     return tab;
// // }

// // int main(void)
// // {
// //     try
// //     {
// //         // std::srand(std::time(NULL));
// //         std::cout << "Subject's tests" << std::endl;
// //         {	// Subject's tests
// //             Span	sp(5);
// //             Span	sp1(0);
// //             Span	sp2(1);

// //             sp2.addNumber(12);

// //             sp.addNumber(20);
// //             sp.addNumber(3);
// //             sp.addNumber(17);
// //             sp.addNumber(9);
// //             sp.addNumber(21);
// //             std::cout << "shortest : " << sp.shortestSpan() << std::endl;
// //             std::cout << "longest : " << sp.longestSpan() << std::endl;
            
// //             std::cout << "longest : " << sp1.longestSpan() << std::endl;
// //             std::cout << "longest : " << sp2.longestSpan() << std::endl;
// //         }
// //             std::cout << "My massive tests" << std::endl;

// //     }
// //     catch (std::exception const &e)
// // 	{
// // 		std::cerr << e.what() << std::endl;
// // 	}
// // 	// {	// My massive tests
// //     //     std::vector<int>    tabTmp(createRandomVector(SIZE));
// // 	// 	Span	            sp(tabTmp.begin(), tabTmp.end());
        
// // 	// 	std::cout << sp.shortestSpan() << std::endl;
// // 	// 	std::cout << sp.longestSpan() << std::endl;
// // 	// }
// //     return 0;
// // }



 void	addToSpan(Span *sp)
{	
	std::vector<int> tab;
    	std::vector<int>::iterator it;
	int	size;
	int	randSize = 20;
	int	threshold = 500;

	srand(time(NULL));
	size = rand() % randSize;
	for (int i = 0; i < size; i++)
		tab.push_back(rand() % threshold - rand() % threshold);
	for (it = tab.begin(); it != tab.end(); it++)
		std::cout << *it << ", ";
	std::cout << std::endl;
	sp->addSpan(tab.begin(), tab.end());
}

int	main()
{
	Span	sp(10000);

	addToSpan(&sp);
	
	try
	{	
		std::cout << "shortest span : " << sp.shortestSpan() << std::endl;
		std::cout << "longest span : " << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

