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
        c->aff_char();
        c->aff_int();
        c->aff_double();
        c->aff_float();
        return 0;    
    }

}