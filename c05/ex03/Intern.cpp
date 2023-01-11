#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "intern creation" << std::endl;
	this->forms[0].name = "robotomy request";
	this->forms[0].ptr = new RobotomyRequestForm("fodder");
	this->forms[1].name = "shrubbery creation";
	this->forms[1].ptr = new ShrubberyCreationForm("fodder");
	this->forms[2].name = "presidential pardon";
	this->forms[2].ptr = new PresidentialPardonForm("fodder");
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
	int i = 0;
	while (i < 3)
	{
		delete this->forms[i].ptr;
		i++;
	}
	// delete[] forms;
}

Intern::Intern(Intern const &cpy)
{
	*this = cpy;
}

const Intern & Intern::operator=(const Intern &rhs)
{
	forms[0] = rhs.forms[0];
	forms[1] = rhs.forms[1];
	forms[2] = rhs.forms[2];
	return *this;
}

Form*   Intern::makeForm(std::string name, std::string target)
{
    Form *res;
	res = NULL;
	int i = 0;
	
		while (i < 3)
		{
			if (name == this->forms[i].name)
			{
				res = this->forms[i].ptr->createForm(target);
				std::cout << "requested form [" << name << "] is created successfully" << std::endl;
				return (res);
			}
			i++;
		}
		if (i == 3)
			std::cout << "requested form [" << name << "] is unknown"
				<< std::endl;
	return (res);
}