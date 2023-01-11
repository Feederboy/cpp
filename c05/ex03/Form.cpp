#include"Form.hpp"


Form::Form(std::string name, const int gradesign, const int gradeex): _name(name), _grade_sign(gradesign), _grade_ex(gradeex)
{
    this->_signed = false;
    if (gradesign < 1 || gradeex < 1)
        throw Form::GradeTooHighException();
    if (gradesign > 150 || gradeex > 150)
        throw Form::GradeTooLowException();

    std::cout << "Form comnstructor called" << std::endl;
}

Form::Form(Form const &cpy):
_name(cpy._name), _grade_sign(cpy._grade_sign), _grade_ex(cpy._grade_ex)
{
    std::cout << "Form copy construcotr called" << std::endl;
    return ;
}

Form::~Form()
{
    std::cout << "Form destructor called" << std::endl;
}

Form const & Form::operator=(Form const &cpy)
{

    if (this != &cpy)
    {
        this->_name = cpy._name;
        // this->_grade_sign = cpy._grade_sign;
        // this->_grade_ex = cpy._grade_ex;
    }
    std::cout << "Form copy comnstructor called" << std::endl;
    return (*this);
}

std::string     Form::getName() const
{
    return (this->_name);
}

int             Form::getGradeSign() const
{
    return (this->_grade_sign);
}

int             Form::getGradeEx() const
{
    return (this->_grade_ex);

}

bool            Form::getIsSigned() const
{
    return (this->_signed);
}

std::ostream &	operator<<(std::ostream &out, Form const &rhs)
{
	out << rhs.getName() << ", signing grade " 
		<< rhs.getGradeSign() << ", execution grade " << rhs.getGradeEx();
	if (rhs.getIsSigned())
		out << " [signed]";
	else
		out << " [not signed]";
	return (out);
}

void        Form::beSigned(Bureaucrat &b)
{
    if (b.getGrade() <= this->getGradeSign())
    {
        std::cout << "FORM FONCTION:: bureaucrat " << b.getName() << " grade " << b.getGrade() << " signed form " << this->getName() << std::endl;
        this->_signed = true;
    }
    else
        throw Form::GradeTooLowException();
}

bool            Form::canBeExecuted(Bureaucrat const &b, Form const &form)
{
    if (b.getGrade() > form._grade_ex)
		throw Form::GradeTooHighException();
	else if (!form._signed)
		throw Form::NotSignedException();
	else
		return (true);
	return false;
}


const char* Form::GradeTooLowException::what() const throw() { return ("Grade is too low."); }

const char* Form::GradeTooHighException::what() const throw() { return ("Grade is too high."); }

const char* Form::NotSignedException::what() const throw() { return ("Form is not signed !"); }