#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class Bureaucrat
{
    private:
        std::string _name;
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

std::ostream &operator<<(std::ostream &out, Bureaucrat const &rhs); 

#endif