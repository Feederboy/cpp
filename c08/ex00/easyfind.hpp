#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <string>
# include <iomanip>
# include <iostream>
# include <vector>
# include <algorithm>

class NoMatchFound: public std::exception
{
    public:
        virtual const char * what() const throw()
        {
            return ("No match found");
        }
        
};

template<typename T>
int &   easyfind(T tab, int search)
{
    typename T::iterator it = tab.begin();
    typename T::iterator ite = tab.end();
    typename T::iterator res = std::find(it, ite, search);

    if (res == ite)
        throw NoMatchFound();
    else
        return (*res);
}

#endif