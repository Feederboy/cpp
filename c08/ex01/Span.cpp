#include "Span.hpp"
#include <math.h>
#include <time.h>

Span::Span():_n(0), _tab()
{
}

Span::Span(unsigned int n): _n(n), _tab()
{
}

Span::Span(Span const &cpy): _n(cpy._n), _tab(cpy._tab)
{
}

Span::~Span()
{
}

Span&  Span::operator=(Span const &rhs)
{
    if (this != &rhs)
    {
        this->_n = rhs._n;
        this->_tab = rhs._tab;
    }
    return *this;
}

void    Span::addNumber(int n)
{
    if (this->_tab.size() < this->_n)
        this->_tab.push_back(n);
    else
        throw NoSpaceLeftException();
}


int     Span::shortestSpan() const
{
    if (this->_n == 0 || this->_n == 1)
        throw NoDistanceException();
    std::vector<int>::const_iterator it = this->_tab.begin();
    std::vector<int>::const_iterator ite = this->_tab.end();
    int tmp = *it;
    int minus = *it;
    int res = 0;


    for (; it != ite; ++it)
    {
        std::cout << *it << std::endl;
        if (*it > tmp)
        {
            tmp = *it;
        }
        if (*it > minus && *it < tmp)
        {
            minus = *it;
        }
    }
    std::cout << "tmp = " << tmp << "   minus = " << minus << "    res = " << tmp - minus << std::endl;
    res = tmp - minus;
    return res;

}

int     Span::longestSpan() const
{
    if (this->_n == 0 || this->_n == 1)
        throw NoDistanceException();
    std::vector<int>::const_iterator it = this->_tab.begin();
    std::vector<int>::const_iterator ite = this->_tab.end();
    int tmp = *it;
    int minus = *it;
    int res = 0;
    
    for (; it != ite; ++it)
    {
        std::cout << *it << std::endl;
        if (*it > tmp)
        {
            tmp = *it;
        }
        if (*it < minus)
        {
            minus = *it;
        }
    }
    std::cout << "tmp = " << tmp << "   minus = " << minus << "    res = " << tmp - minus << std::endl;
    res = tmp - minus;
    return res;
}