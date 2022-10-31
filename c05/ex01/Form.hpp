#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    std::string _name;
    bool        _signed;
    const int   _grade_sign;
    const int   _grade_ex;
public:
    Form();
    Form(std::string name, int gradesign, int gradeex);
    ~Form();
    Form(Form const &cpy);
    Form const &operator=(Form const &rhs);
        
    std::string getName() const;
    int         getGradeSign() const;
    int         getGradeEx() const;
    bool        getIsSigned() const;

    void        beSigned(Bureaucrat &b);


    class GradeTooHighException: public std::exception
        {
            public:
                virtual const char *what() const throw()
                {
                    return ("Grade too high");
                }
        };


        class GradeTooLowException: public std::exception
        {
            public:
                virtual const char *what() const throw()
                {
                    return ("Grade too low");
                }
        };

};





#endif