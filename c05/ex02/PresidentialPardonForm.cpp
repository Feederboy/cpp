#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 5 , 25)
, _gradeEx(5), _gradeSign(25), _name("PresidentialPardonForm"), _target(target)
{
	this->_signed = false;
	if (_gradeEx < 1 || _gradeSign < 1)
		throw PresidentialPardonForm::GradeTooHighException();
	else if (_gradeEx > 150 || _gradeSign > 150)
		throw PresidentialPardonForm::GradeTooLowException();
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cpy) : Form(cpy.getName(), cpy.getGradeEx()
	, cpy.getGradeS()), _gradeEx(cpy.getGradeEx()), _gradeSign(cpy.getGradeS()), _name(cpy.getName()), _target(cpy.getTarget())
{
	*this = cpy;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

const PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	this->_signed = rhs.getIsSigned();
	return *this;
}

const std::string	PresidentialPardonForm::getName(void) const
{
	return this->_name;
}

const std::string	PresidentialPardonForm::getTarget(void) const
{
	return this->_target;
}

int			PresidentialPardonForm::getGradeEx(void) const
{
	return this->_gradeEx;
}

int			PresidentialPardonForm::getGradeS(void) const
{
	return this->_gradeSign;
}

bool		PresidentialPardonForm::getIsSigned(void) const
{
	return this->_signed;
}

std::ostream &	operator<<(std::ostream &o, PresidentialPardonForm const &rhs)
{
	o << rhs.getName() << ", signing grade " 
		<< rhs.getGradeS() << ", execution grade " << rhs.getGradeEx();
	if (rhs.getIsSigned())
		o << " [signed]";
	else
		o << " [not signed]";
	return o;
}

void            PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (canBeExecuted(executor, *this))
	{
		std::cout << this->_target << " has been pardoned by zaphrod bebleblblebrox" << std::endl;		
	}

}