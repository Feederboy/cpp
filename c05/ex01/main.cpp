#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	Bureaucrat		jo("jo", 150);
	Bureaucrat		lila("lila", 1);

	std::cout << jo << std::endl;
	std::cout << lila << std::endl;

	Form			first("first", 50, 20);
	Form			second("second", 10, 1);


	///////////////////////////////////////////////////////////////
	
	std::cout << "----FORMS----" << std::endl << std::endl;

	std::cout << first.getName() << " grade " << first.getGradeSign() << std::endl;
	std::cout << second.getName() << " grade " << second.getGradeSign() << std::endl;
	std::cout << std::endl;

	///////////////////////////////////////////////////////////////
	
	std::cout << "----TEST CREATION-----" << std::endl << std::endl;
	
	try
	{
		std::cout << "test Phil | signe grade 155 :" << std::endl;
		Form		phil("phil" ,155 , 19);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << "test Phil | exec grade 155 :" << std::endl;
		Form		phil("phil" ,1 , 155);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		std::cout << "test lola | signe grade 0 :" << std::endl;
		Form		lola("lola", 0, 10);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		std::cout << "test lola | exec grade 0 :" << std::endl;
		Form		lola("lola", 10, 0);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;


	///////////////////////////////////////////////////////////////

	std::cout << "----TEST SIGNATURE FAILED-----" << std::endl << std::endl;

	std::cout << first.getName() << std::endl;
	std::cout << second.getName() << std::endl;
	std::cout << "Test for first Form:" << std::endl;
	try
	{
		jo.signForm(first);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "Test for second Form:" << std::endl;
	try
	{
		jo.signForm(second);
	}	
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	///////////////////////////////////////////////////////////////

	std::cout << "----TEST SIGNATURE SUCCED-----" << std::endl << std::endl;

	std::cout << "Test for first Form:" << std::endl;
	try
	{
		lila.signForm(first);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Test for second Form:" << std::endl;
	try
	{
		lila.signForm(second);
	}	
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	///////////////////////////////////////////////////////////////

	std::cout << "----END-----" << std::endl << std::endl;
	std::cout << "----END-----" << std::endl << std::endl;
	std::cout << "----END-----" << std::endl << std::endl;
	std::cout << "----END-----" << std::endl << std::endl;
	std::cout << "----END-----" << std::endl << std::endl;


	std::cout << std::endl;

	Bureaucrat		p("p", 150);
	Form			pp("pp", 50, 20);

std::cout << "Test for pp Form:" << std::endl;
	try
	{
		p.signForm(pp);
	}	
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;


	return (0);
}