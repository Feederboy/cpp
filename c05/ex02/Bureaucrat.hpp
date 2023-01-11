#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
# include <string>
# include <iomanip>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        const std::string _name;
        int _grade;
    
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat();
        Bureaucrat(Bureaucrat const &cpy);
        Bureaucrat const &operator=(Bureaucrat const &rhs);
        
        std::string getName() const;
        int         getGrade() const;
        
        void        increment();
        void        decrement();
        void        signForm(Form &form);
        void        executeForm(Form &form);

        class GradeTooHighException: public std::exception
        {
            public:
                virtual const char *what() const throw();
        };


        class GradeTooLowException: public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &rhs); 

#endif