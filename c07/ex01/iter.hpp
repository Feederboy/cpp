#ifndef ITER_HPP
#define ITER_HPP

// template<typename T>
// void    iter(T *tab, int len, void (*f) (T &))
// {
//     int i;

//     i = 0;
//     while (i < len)
//     {
//         f(tab[i]);
//         i++;
//     }
// }

template<typename T>
void    iter(T const *tab, int const len, void (*f) (T const &))
{
    int i;

    i = 0;
    while (i < len)
    {
        f(tab[i]);
        i++;
    }
}

#endif