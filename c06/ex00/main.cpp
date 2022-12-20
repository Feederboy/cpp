#include "Convert.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Only one argument" << '\n';
        return 1;
    }
    else
    {
        Convert *c = new Convert(av[1]);
    }

}