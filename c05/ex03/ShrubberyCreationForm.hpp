#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Bureaucrat.hpp"
# include <fstream>

class ShrubberyCreationForm: public virtual Form
{
    private :
		const int		    _gradeEx;
		const int		    _gradeSign;
		const std::string	_name;
		const std::string	_target;
		bool			    _signed;

    public:
        ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &cpy);
		virtual	~ShrubberyCreationForm();

		const ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &cpy);
		
		//methods
		void	execute(Bureaucrat const &executor) const;
		Form * createForm(std::string target);
		//functions
		ShrubberyCreationForm	&beSigned(const Bureaucrat &b);
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

std::ostream	&operator<<(std::ostream &o, const ShrubberyCreationForm &rhs);


#endif