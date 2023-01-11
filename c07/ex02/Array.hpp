#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
    private:
        T           *_elems;
        unsigned int _size;

    public:
        Array(): _elems(T[0]), _size(0)
        {
        }

        Array(unsigned int n): _elems(T[n]), _size(n)
        {
        }

        unsigned int size() const
        {
            return _size;
        }
        

};

#endif