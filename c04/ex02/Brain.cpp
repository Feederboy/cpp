#include "Brain.hpp"

Brain::Brain()
{
    this->ideas = new std::string[100];
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(Brain const &cpy)
{
    this->ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = cpy.getIdeas()[i];
    }
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain()
{
    delete [] this->ideas;
    std::cout << "Brain destructor  called" << std::endl;
}

Brain const & Brain::operator=(Brain const &rhs)
{
    if (this != &rhs)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = rhs.getIdeas()[i];
    }
    return (*this);
}

std::string*     Brain::getIdeas() const
{
    return (this->ideas);
}

void            Brain::setIdeas(std::string *ideas)
{
    this->ideas = ideas;
}