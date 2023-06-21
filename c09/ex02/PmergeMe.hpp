#ifndef PMERGME_HPP
#define PMERGME_HPP

#include <iostream> //cout
#include <stdlib.h> //atoi
#include <iomanip> //setprecision
#include <sys/time.h> //gettimeofday
#include <vector> //sorting
#include <deque> //sorting
#include <set> //verify duplicates

class PmergeMe
{
private:
    int                 _size;
    bool                _isSorted;
    std::vector<int>    _vector;
    std::deque<int>     _deque;
    double              _vecTime;
    double              _deqTime;
    std::vector<int>    _parseArgsVect(int ac, char **av);
    std::deque<int>     _parseArgsDeq(int ac, char **av);
    void                _checkDup();
    void                _printAll();
    void                _printTime(std::string vectDeq) const;
    template <typename T>
    void                _mergeInsertSort(T& container);

    double              _getTime() const; 
    double              _deltaTime(long long time) const; 

public:
    PmergeMe();
    PmergeMe(int ac, char **av);
    PmergeMe(const PmergeMe& obj);
    virtual ~PmergeMe();
    PmergeMe& operator=(const PmergeMe& obj);

    double getVectorTime() const;
    double getDequeTime() const;

    class invalidArgument : public std::exception
    {
        public:
            virtual const char* what() const throw()
            {
                return ("Error: invalid argument\n");
            }
    };
    class Duplicates : public std::exception
    {
        public:
            virtual const char* what() const throw()
            {
                return ("Error: duplicates not allowed\n");
            }
    };
    class ContainerError : public std::exception
    {
        public:
            virtual const char* what() const throw()
            {
                return ("Error: invalid container, must be vector or deque\n");
            }
    };

};

std::ostream& operator<<(std::ostream& o, const PmergeMe i);

#endif