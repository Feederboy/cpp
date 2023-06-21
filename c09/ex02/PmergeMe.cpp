#include "PmergeMe.hpp"

PmergeMe::PmergeMe(/* args */) : _size(0), _isSorted(false)
{
    return;
}

PmergeMe::PmergeMe(int ac, char **av) : _size(ac - 1), _isSorted(false)
{
    _vector = _parseArgsVect(ac, av);
    _checkDup();
    _deque = _parseArgsDeq(ac, av);

    _printAll();

    double timeBegin = _getTime();
    _mergeInsertSort(_vector);
    _vecTime = _deltaTime(timeBegin);

    timeBegin = _getTime();
    _mergeInsertSort(_deque);
    _deqTime = _deltaTime(timeBegin);

    _isSorted = true;
    _printAll();

    _printTime("vector");
    _printTime("deque");
    return ;

}

PmergeMe& PmergeMe::operator=(const PmergeMe& obj)
{
    if (this != &obj)
    {
        this->_size = obj._size;
        this->_isSorted = obj._isSorted;
        this->_vector = obj._vector;
        this->_deque = obj._deque;
        this->_vecTime = obj._vecTime;
        this->_deqTime = obj._deqTime;
    }
    return (*this);
}


PmergeMe::~PmergeMe()
{
}

double PmergeMe::getVectorTime() const
{
    return (this->_vecTime);
}

double PmergeMe::getDequeTime() const
{
    return (this->_deqTime);
}



std::ostream&   operator<<(std::ostream& o, const PmergeMe& i)
{
    o << "Vector delta = " << i.getVectorTime() << std::endl
    << "Deque delta = " << i.getDequeTime() << std::endl;
    return o;
}

std::vector<int>   PmergeMe::_parseArgsVect(int ac, char **av)
{
    std::vector<int> vect;
    for (int i = 1; i < ac; i++)
    {
        std::string arg = av[i];
        int val = atoi(arg.c_str());
        if (val <= 0)
            throw PmergeMe::invalidArgument();
        vect.push_back(val);
    }
    return (vect);
}

std::deque<int>   PmergeMe::_parseArgsDeq(int ac, char **av)
{
    std::deque<int> vect;
    for (int i = 1; i < ac; i++)
    {
        std::string arg = av[i];
        int val = atoi(arg.c_str());
        if (val <= 0)
            throw PmergeMe::invalidArgument();
        vect.push_back(val);
    }
    return (vect);
}

void    PmergeMe::_checkDup()
{
    std::set<int> set;
    for (int i = 0; i < _size; i++)
    {
        if (set.find(_vector[i]) != set.end())
            throw PmergeMe::Duplicates();
        set.insert(_vector[i]);
    }
}

template <typename T>
void    PmergeMe::_mergeInsertSort(T& container)
{
    if (container.size() <= 1)
        return;
    typename T::iterator it = container.begin();
    typename T::iterator ite = container.end();
    typename T::iterator it2 = container.begin();
    typename T::iterator ite2 = container.end();
    int tmp;
    while (it != ite)
    {
        tmp = *it;
        it2 = it;
        while (it2 != ite2 && tmp > *it2)
            it2++;
        container.insert(it2, tmp);
        it++;
    }
}

double PmergeMe::_getTime() const
{
    struct timeval  tv;

    gettimeofday(&tv, NULL);
    return ((double)tv.tv_sec + (double)tv.tv_usec / 1000000);
}

double PmergeMe::_deltaTime(long long timeBegin) const
{
    return (_getTime() - timeBegin);
}

void    PmergeMe::_printAll()
{
    if (!_isSorted)
        std::cout << "Before: ";
    else
        std::cout << "After: ";
    std::vector<int>::iterator it = _vector.begin();
    std::vector<int>::iterator ite = _vector.end();
    while (it != ite)
    {
        std::cout << " " << *it;
        it++;
    }
    std::cout << std::endl;
}

void    PmergeMe::_printTime(std::string container) const
{
    std::cout << container << " delta = ";
    if (container == "vector")
        std::cout << _vecTime;
    else if (container == "deque")
        std::cout << _deqTime;
    std::cout << std::endl;
}