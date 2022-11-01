#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(Intern const &cpy)
{
    (void)cpy;
}

const Intern & Intern::operator=(const Intern &rhs)
{
    (void)rhs;
    return (*this);
}

Form*   Intern::makeForm(std::string name, std::string target)
{
    std::string tmp[3] = {"robotomy, shrubbery, presidential"};
    Form *res;
    int i;

    if (name.empty())
        std::cout << "Not a valid name" << std::endl;

    for (i = 0; i < 3; i++)
    {
        size_t		pos = name.find(tmp[i]);
		if (pos != std::string::npos)
			break;
	}
	switch (i)
	{
		case 0:
			std::cout << "Intern create Form " << name << std::endl;
			res = new RobotomyRequestForm(target);
			break ;
		case 1:
			std::cout << "Intern create Form " << name << std::endl;
			res = new ShrubberyCreationForm(target);
			break;
		case 2:
			std::cout << "Intern create Form " << name << std::endl;
			res = new PresidentialPardonForm(target);
			break;
		default:
			std::cout << "Intern can't create Form" << name << std::endl;
			res = NULL;
			break;
	}
	return (res);
}