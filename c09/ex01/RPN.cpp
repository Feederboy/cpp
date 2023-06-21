#include "RPN.hpp"

RPN::RPN() : _res(0)
{
    return;
}

RPN::RPN(const RPN& obj)
{
    *this = obj;
    return;
}

RPN::~RPN()
{
    return;
}

RPN& RPN::operator=(const RPN& rhs)
{
    if (this != &rhs)
    {
        this->_stack = rhs._stack;
        this->_res = rhs._res;
    }
    return (*this);
}

void    RPN::reverse(const std::string &expr)
{
    std::string token;

    for (std::size_t i = 0; i< expr.length(); i++)
    {
        char c = expr[i];
        if (c == ' ')
            continue;
        else if (isdigit(c))
            token += c;
        else if (isOpe(c))
        {
            if (_stack.size() < 2)
                throw notEnoughOperands();
            int num2 = _stack.top();
            _stack.pop();
            int num1 = _stack.top();
            _stack.pop();
            calc(num1, num2, c);
        }
        else
            throw invalidToken();
        if (!token.empty())
        {
            _stack.push(atoi(token.c_str()));
            token.clear();
        }
    }
    if (_stack.size() != 1)
        throw tooManyOperands();
    _res = _stack.top();
    _stack.pop();
}

bool RPN::isOpe(char c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/')
        return (true);
    return (false);
}

void    RPN::calc(int num1, int num2, char ope)
{
    switch (ope)
    {
        case '+':
            _stack.push(num1 + num2);
            break;
        case '-':
            _stack.push(num1 - num2);
            break;
        case '*':
            _stack.push(num1 * num2);
            break;
        case '/':
            if (num2 == 0)
                throw divByZero();
            _stack.push(num1 / num2);
            break;
        
    }
}

int     RPN::getRes() const
{
    return (this->_res);
}

std::ostream&   operator<<(std::ostream& o, const RPN& i)
{
    o<< i.getRes();
    return (o);
}