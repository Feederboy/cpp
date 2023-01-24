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

// int     Span::shortestSpan() const
// {
//     if (this->_n == 0 || this->_n == 1)
//         throw NoDistanceException();
//     std::vector<int>::const_iterator it = this->_tab.begin();
//     std::vector<int>::const_iterator ite = this->_tab.end();
//     int tmp = *it;
//     int minus = *it;
//     int res = 0;


//     std::cout << std::endl;
//     for (; it != ite; ++it)
//     {
//         std::cout << *it << std::endl;
//         if (*it > tmp)
//         {
//             tmp = *it;
//         }
//         if (*it > minus && *it < tmp)
//         {
//             minus = *it;
//         }
//     }
//     std::cout << "max = " << tmp << "   min = " << minus << "    res = " << tmp - minus << std::endl;
//     res = tmp - minus;
//     return res;

// }

// int     Span::longestSpan() const
// {
//     if (this->_n == 0 || this->_n == 1)
//         throw NoDistanceException();
//     std::vector<int>::const_iterator it = this->_tab.begin();
//     std::vector<int>::const_iterator ite = this->_tab.end();
//     int tmp = *it;
//     int minus = *it;
//     int res = 0;
    
//     std::cout << std::endl;
//     for (; it != ite; ++it)
//     {
//         std::cout << *it << std::endl;
//         if (*it > tmp)
//         {
//             tmp = *it;
//         }
//         if (*it < minus)
//         {
//             minus = *it;
//         }
//     }
//     std::cout << "max = " << tmp << "   min = " << minus << "    res = " << tmp - minus << std::endl;
//     res = tmp - minus;
//     return res;
// }

long		Span::longestSpan() const
{
    if (_tab.size() <= 1)
    {
        throw NoDistanceException();
    }
    long tmp1 = static_cast<long>(*std::max_element(_tab.begin(), _tab.end()));
    long tmp2 = static_cast<long>(*std::min_element(_tab.begin(), _tab.end()));
	return (tmp1 - tmp2);	
}

long		Span::shortestSpan() const
{
	long 	lowest = -1;
	long	span;
    std::vector<int>::const_iterator it = _tab.begin();
    std::vector<int>::const_iterator jt;

    if (_tab.size() <= 1)
    {
        throw NoDistanceException();
    }
        std::cout << std::endl;

	for (; it != _tab.end(); it++)
	{
		for (jt = it + 1; jt != _tab.end(); jt++)
		{
			if (*it > *jt)
				span = static_cast<long>(*it) - static_cast<long>(*jt);
			else
				span = static_cast<long>(*jt) - static_cast<long>(*it);
			if (!span)
				return (0);
			if (lowest > span || lowest < 0)
				lowest = span;
		}
	}
	return (lowest);
}