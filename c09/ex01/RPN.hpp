#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <string>
#include <stdlib.h>

class RPN
{
    public:
        RPN();
        RPN(const RPN& obj);
        virtual ~RPN();
        RPN&    operator=(const RPN& rhs);
        void    reverse(const std::string &expr);
        bool    isOpe(char c);
        void    calc(int num1, int num2, char ope);
        int     getRes() const;
        class notEnoughOperands : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Error: not enough operands");
                }
        };
        class invalidToken : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Error: invalid token");
                }
        };
        class tooManyOperands : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Error: too many operands");
                }
        };
        class divByZero : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Error: division by zero");
                }
        };
        

    private:
        std::stack<int> _stack;
        int             _res;
    
    
};

std::ostream& operator<<(std::ostream& o, const RPN& i);

#endif