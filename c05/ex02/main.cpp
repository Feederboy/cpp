#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

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

	jo.signForm(first);
	lila.signForm(first);

	jo.executeForm(first);
	lila.executeForm(first);

	return (0);
}