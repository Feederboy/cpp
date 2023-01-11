#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 45 , 72)
, _gradeEx(45), _gradeSign(72), _name("RobotomyRequestForm"), _target(target)
{
	this->_signed = false;
	if (_gradeEx < 1 || _gradeSign < 1)
		throw RobotomyRequestForm::GradeTooHighException();
	else if (_gradeEx > 150 || _gradeSign > 150)
		throw RobotomyRequestForm::GradeTooLowException();
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cpy) : Form(cpy.getName(), cpy.getGradeEx()
	, cpy.getGradeS()), _gradeEx(cpy.getGradeEx()), _gradeSign(cpy.getGradeS()), _name(cpy.getName()), _target(cpy.getTarget())
{
	*this = cpy;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

const RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	this->_signed = rhs.getIsSigned();
	return *this;
}

const std::string	RobotomyRequestForm::getName(void) const
{
	return this->_name;
}

const std::string	RobotomyRequestForm::getTarget(void) const
{
	return this->_target;
}

int			RobotomyRequestForm::getGradeEx(void) const
{
	return this->_gradeEx;
}

int			RobotomyRequestForm::getGradeS(void) const
{
	return this->_gradeSign;
}

bool		RobotomyRequestForm::getIsSigned(void) const
{
	return this->_signed;
}

std::ostream &	operator<<(std::ostream &o, RobotomyRequestForm const &rhs)
{
	o << rhs.getName() << ", signing grade " 
		<< rhs.getGradeS() << ", execution grade " << rhs.getGradeEx();
	if (rhs.getIsSigned())
		o << " [signed]";
	else
		o << " [not signed]";
	return o;
}

void            RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	int rand;
	if (canBeExecuted(executor, *this))
	{
		rand = time(NULL);
		if (rand % 2 == 0)
			std::cout << this->_target << " has been robotomised" << std::endl;		
		else
			std::cout << this->_target << " has not been robotomised" << std::endl;		
	}

}

Form *		RobotomyRequestForm::createForm(std::string target)
{
	return (new RobotomyRequestForm(target));
}

const char* RobotomyRequestForm::GradeTooLowException::what() const throw() { return ("Grade is too low."); }
const char* RobotomyRequestForm::GradeTooHighException::what() const throw() { return ("Grade is too high."); }