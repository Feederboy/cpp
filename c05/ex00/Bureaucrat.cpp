#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "default nimal comnstructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();

    std::cout << "Bureaucrat comnstructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &cpy):
_name(cpy._name), _grade(cpy._grade)
{
    std::cout << "Bureaucrat copy construcotr called" << std::endl;
    return ;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat const & Bureaucrat::operator=(Bureaucrat const &cpy)
{

    if (this != &cpy)
    {
        this->_name = cpy._name;
        this->_grade = cpy._grade;
    }
    std::cout << "Bureaucrat copy comnstructor called" << std::endl;
    return (*this);
}

std::string     Bureaucrat::getName() const
{
    return (this->_name);
}

int             Bureaucrat::getGrade() const
{
    return (this->_grade);
}

void            Bureaucrat::increment()
{
    if (this->_grade > 1)
        this->_grade--;
    else
        throw Bureaucrat::GradeTooHighException();
}

void            Bureaucrat::decrement()
{
    if (this->_grade < 150)
        this->_grade++;
    else
        throw Bureaucrat::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &rhs)
{
    out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
    return (out);
}

