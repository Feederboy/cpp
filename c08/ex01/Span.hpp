#ifndef SPAN_HPP
#define SPAN_HPP

# include <string>
# include <iomanip>
# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
    private:
        unsigned int     _n;
        std::vector<int> _tab;

    public:
        Span();
        Span(unsigned int n);
        ~Span();
        Span(Span const &cpy);
        Span & operator=(Span const &rhs);

        void    addNumber(int n);
        void    printspan() const;
        void	addSpan(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        int shortestSpan() const;
        int longestSpan() const;
};

class NoDistanceException: public std::exception
{
    public:
        virtual const char	*what() const throw()
        {
            return ("No distance exception");
        }
};

class NoSpaceLeftException: public std::exception
{
    public:
        virtual const char	*what() const throw()
        {
            return ("No space left exception");
        }
};

std::ostream&		operator<<(std::ostream &os, Span &rgth);

#endif