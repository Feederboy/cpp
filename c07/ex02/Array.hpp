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
        Array(): _elems(new T[0]), _size(0)
        {
        }

        Array(unsigned int n): _elems(new T[n]), _size(n)
        {
            unsigned int i = 0;
            while (i < n)
                _elems[i++] = T();
        }

        unsigned int size() const
        {
            return _size;
        }

        Array<T>(Array const &cpy)
        {
            this->_elems = new T[cpy.size()];
            this->_size = cpy._size;
            unsigned int i = 0;
            while (i < _size)
            {
                this->_elems[i] = cpy._elems[i];
                i++;
            }
        }

        ~Array()
        {
            delete [] this->_elems;
        }

        Array<T> & operator=(Array const &rhs)
        {
            if (this->_elems)
                delete [] this->_elems;
            this->_elems = new T[rhs.size()];
            this->_size = rhs._size;
            unsigned int i = 0;
            while (i < _size)
            {
                this->_elems[i] = rhs._elems[i];
                i++;
            }
            return (*this);
        }

        T   &operator[](unsigned int n)
        {
            if (n >= this->_size)
            {
                ErrorIteration e;
                throw(e);
            }
            else
                return (this->_elems[n]);
        }

        class ErrorIteration: public std::exception
        {
            public:
                virtual const char	*what() const throw()
			{
				return ("Error iteration");
			}
        };
};

#endif