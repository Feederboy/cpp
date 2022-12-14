#include <iostream>

int main(int ac, char **av)
{
    if (ac > 1)
    {
        for (int i = 1; i < ac; i++)
        {
            for (int y = 0; av[i][y]; y++)
            {
                std::cout << (char) std::toupper(av[i][y]);
            }
        }
        std::cout << std::endl;
    }
    else
    {
        std::cout << "* LOUD AND UNBEARABLE BACKGROUND NOISE *";
        std::cout << std::endl;
    }
    return (0);
}