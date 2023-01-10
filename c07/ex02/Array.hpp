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
        unsigned int size() const
        {
            return _size;
        }
        

};

#endif