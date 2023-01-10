#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<typename T>
T const & max(T const & x, T const & y)
{
    return (x >= y ? x : y);
}

template<typename T>
T const & min(T const & x, T const & y)
{
    return (x <= y ? x : y);
}

template<typename T>
void swap(T & a, T & b)
{
    T t;
    t = a;
    a = b;
    b = t;
}

#endif