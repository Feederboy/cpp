#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 137 , 145)
, _gradeEx(137), _gradeSign(145), _name("ShrubberyCreationForm"), _target(target)
{
	this->_signed = false;
	if (_gradeEx < 1 || _gradeSign < 1)
		throw ShrubberyCreationForm::GradeTooHighException();
	else if (_gradeEx > 150 || _gradeSign > 150)
		throw ShrubberyCreationForm::GradeTooLowException();
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cpy) : Form(cpy.getName(), cpy.getGradeEx()
	, cpy.getGradeS()), _gradeEx(cpy.getGradeEx()), _gradeSign(cpy.getGradeS()), _name(cpy.getName()), _target(cpy.getTarget())
{
	*this = cpy;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

const ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	this->_signed = rhs.getIsSigned();
	return *this;
}

const std::string	ShrubberyCreationForm::getName(void) const
{
	return this->_name;
}

const std::string	ShrubberyCreationForm::getTarget(void) const
{
	return this->_target;
}

int			ShrubberyCreationForm::getGradeEx(void) const
{
	return this->_gradeEx;
}

int			ShrubberyCreationForm::getGradeS(void) const
{
	return this->_gradeSign;
}

bool		ShrubberyCreationForm::getIsSigned(void) const
{
	return this->_signed;
}

std::ostream &	operator<<(std::ostream &o, ShrubberyCreationForm const &rhs)
{
	o << rhs.getName() << ", signing grade " 
		<< rhs.getGradeS() << ", execution grade " << rhs.getGradeEx();
	if (rhs.getIsSigned())
		o << " [signed]";
	else
		o << " [not signed]";
	return o;
}

void            ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    std::string	name = "_shrubbery";

	if (canBeExecuted(executor, *this))
	{
		name.insert(0, this->_target);
		std::ofstream	ostream(name.c_str());
        ostream << "                     ___" << std::endl;
	ostream << "                _,-'\"\"   \"\"\"\"`--." << std::endl;
	ostream << "             ,-'          __,,-- \\ " << std::endl;
	ostream << "           ,'    __,--\"\"\"\"dF      )" << std::endl;
	ostream << "          /   .-\"Hb_,--\"\"dF      /" << std::endl;
	ostream << "        ,'       _Hb ___dF\"-._,-'" << std::endl;
	ostream << "      ,'      _,-\"\"\"\"   \"\"--..__" << std::endl;
	ostream << "     (     ,-'                  `." << std::endl;
	ostream << "      `._,'     _   _             ;" << std::endl;
	ostream << "       ,'     ,' `-'Hb-.___..._,-'" << std::endl;
	ostream << "       \\    ,'\"Hb.-'HH`-.dHF\"" << std::endl;
	ostream << "        `--'   \"Hb  HH  dF\"" << std::endl;
	ostream << "                \"Hb HH dF" << std::endl;
	ostream << "                 \"HbHHdF" << std::endl;
	ostream << "                  |HHHF" << std::endl;
	ostream << "                  |HHH|" << std::endl;
	ostream << "                  |HHH|" << std::endl;
	ostream << "                  |HHH|" << std::endl;
	ostream << "                  |HHH|" << std::endl;
	ostream << "                  dHHHb" << std::endl;
	ostream << "                .dFd|bHb.               o" << std::endl;
	ostream << "      o       .dHFdH|HbTHb.          o /" << std::endl;
	ostream << "\\  Y  |  \\__,dHHFdHH|HHhoHHb.__       Y" << std::endl;
	ostream << "##########################################" << std::endl;
	ostream.close();
	}

}

Form *		ShrubberyCreationForm::createForm(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

const char* ShrubberyCreationForm::GradeTooLowException::what() const throw() { return ("Grade is too low."); }
const char* ShrubberyCreationForm::GradeTooHighException::what() const throw() { return ("Grade is too high."); }