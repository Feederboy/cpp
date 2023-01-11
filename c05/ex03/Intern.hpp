#ifndef INTERN_HPP
#define INTERN_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
    public:
        Intern();
       ~Intern();
       Intern(Intern const &cpy);
        const Intern &operator=(const Intern &rhs);
        Form*   makeForm(std::string name, std::string target);
    
    private:
        typedef	struct	s_forms
		{
			std::string	name;
			Form		*ptr;
		}		t_forms;
		t_forms	forms[3];
};



#endif