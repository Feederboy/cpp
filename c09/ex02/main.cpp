#include "PmergeMe.hpp"
#include <iostream>

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cerr << "Error: usage" << av[0] << " sequence" << std::endl;
        return 1;
    }
    else
    {
        try
        {
            PmergeMe seq(ac, av);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
    }
    return 0;
}