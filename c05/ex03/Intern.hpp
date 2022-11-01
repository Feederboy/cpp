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
};



#endif