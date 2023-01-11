#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"
# include <fstream>
#include <ctime>

class PresidentialPardonForm: public virtual Form
{
    private :
		const int		    _gradeEx;
		const int		    _gradeSign;
		const std::string	_name;
		const std::string	_target;
		bool			    _signed;

    public:
        PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &cpy);
		virtual	~PresidentialPardonForm();

		const PresidentialPardonForm	&operator=(const PresidentialPardonForm &cpy);
		
		//methods
		void	execute(Bureaucrat const &executor) const;
		Form * createForm(std::string target);
		//functions
		PresidentialPardonForm	&beSigned(const Bureaucrat &b);
		//getters
		const std::string	getName(void) const;
		int		getGradeEx(void) const;
		int		getGradeS(void) const;
		bool		getIsSigned(void) const;
		const std::string	getTarget(void) const;



	class	GradeTooHighException : public std::exception
	{
		public :
			virtual const char	*what() const throw();
	};

    
	class	GradeTooLowException : public std::exception
	{
		public :
			virtual const char	*what() const throw();
	};


};

std::ostream	&operator<<(std::ostream &o, const PresidentialPardonForm &rhs);


#endif