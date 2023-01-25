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

void	Span::addSpan(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{	
    	std::vector<int>::iterator it;
	
	try
	{
		for (it = begin; it != end; it++)
			addNumber(*it);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

}

void	Span::printspan() const
{
	std::vector<int>::const_iterator it = this->_tab.begin();

	std::cout  << "[";
	for (; it != _tab.end(); it++)
	{
		std::cout << *it << ", ";
	}
	std::cout  << "]";
	std::cout << std::endl;

}

int     Span::shortestSpan() const
{
    if (_tab.size() <= 1)
	{
        throw NoDistanceException();
	}
    std::vector<int>::const_iterator it = this->_tab.begin();
    std::vector<int>::const_iterator jt; 
    int tmp;
	int res = -1;

    std::cout << std::endl;
    for (; it != _tab.end(); ++it)
    {
		for (jt = it + 1; jt != _tab.end(); jt++)
		{
			if (*it > *jt)
				tmp = static_cast<int>(*it) - static_cast<int>(*jt);
			else
				tmp = static_cast<int>(*jt) - static_cast<int>(*it);
			if (!tmp)
				return (0);
			if (res > tmp || res < 0)
			{
				res = tmp;
			}
		}
    }
    return (res);

}

int		Span::longestSpan() const
{
    if (_tab.size() <= 1)
	{
        throw NoDistanceException();
	}
    int tmp1 = static_cast<int>(*std::max_element(_tab.begin(), _tab.end()));
    int tmp2 = static_cast<int>(*std::min_element(_tab.begin(), _tab.end()));
	return (tmp1 - tmp2);	
}