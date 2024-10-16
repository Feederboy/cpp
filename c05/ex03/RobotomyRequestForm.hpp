#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"
# include <fstream>
#include <ctime>

class RobotomyRequestForm: public virtual Form
{
    private :
		const int		    _gradeEx;
		const int		    _gradeSign;
		const std::string	_name;
		const std::string	_target;
		bool			    _signed;

    public:
        RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &cpy);
		virtual	~RobotomyRequestForm();

		const RobotomyRequestForm	&operator=(const RobotomyRequestForm &cpy);
		
		//methods
		void	execute(Bureaucrat const &executor) const;
		Form * createForm(std::string target);
		//functions
		RobotomyRequestForm	&beSigned(const Bureaucrat &b);
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

std::ostream	&operator<<(std::ostream &o, const RobotomyRequestForm &rhs);


#endif