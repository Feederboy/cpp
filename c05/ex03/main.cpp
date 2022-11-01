#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"

int	main()
{
	Bureaucrat		jo("jo", 150);
	Bureaucrat		lila("lila", 1);
	
	std::string		target1 = "jardin";
	std::string		target2 = "test";
	std::string		target3 = "testrob";
	std::string		target4 = "testpresi";

	ShrubberyCreationForm			first(target1);
	ShrubberyCreationForm			second(target2);
	RobotomyRequestForm				third(target3);
	PresidentialPardonForm			fourth(target4);
	


	///////////////////////////////////////////////////////////////
	
	std::cout << "----PRINT DATA----" << std::endl << std::endl;

	std::cout << first << std::endl;
	std::cout << second << std::endl;
	std::cout << std::endl;
	std::cout << third << std::endl;
	std::cout << std::endl;
	std::cout << fourth << std::endl;
	std::cout << std::endl;
	std::cout << jo << std::endl;
	std::cout << lila << std::endl;
	std::cout << std::endl;

	///////////////////////////////////////////////////////////////

	std::cout << "----SIGNE FORM----" << std::endl << std::endl;

	jo.signForm(first);
	lila.signForm(first);
	std::cout << std::endl;
	jo.signForm(third);
	lila.signForm(third);
	std::cout << std::endl;
	jo.signForm(fourth);
	lila.signForm(fourth);
	std::cout << std::endl;

	///////////////////////////////////////////////////////////////

	std::cout << "----USE FORM----" << std::endl << std::endl;

	jo.executeForm(first);
	lila.executeForm(first);
	std::cout << std::endl;
	jo.executeForm(second);
	lila.executeForm(second);
	std::cout << std::endl;
	jo.executeForm(third);
	lila.executeForm(third);
	std::cout << std::endl;
	jo.executeForm(fourth);
	lila.executeForm(fourth);
	std::cout << std::endl;
	
	///////////////////////////////////////////////////////////////

	Intern			randomOne;
	Form			*rf_1;
	Form			*rf_2;
	Form			*rf_3;
	Form			*rf_4;
	std::string		nameTest_1 = "robotomy test";
	std::string		nameTest_2 = "presidential test";
	std::string		nameTest_3 = "shrubbery test";
	std::string		nameTest_4 = "shr test";
	

	
	///////////////////////////////////////////////////////////////
	
	std::cout << "----INTERN FORM's CREATION----" << std::endl << std::endl;

	rf_1 = randomOne.makeForm(nameTest_1, target3);
	rf_2 = randomOne.makeForm(nameTest_2, target4);
	rf_3 = randomOne.makeForm(nameTest_3, target1);
	rf_4 = randomOne.makeForm(nameTest_4, target2);
	std::cout << std::endl;
	
	std::cout << rf_1 << std::endl;
	std::cout << std::endl;
	std::cout << rf_2 << std::endl;
	std::cout << std::endl;
	std::cout << rf_3 << std::endl;
	std::cout << std::endl;
	std::cout << rf_4 << std::endl;
	
	return (0);
}