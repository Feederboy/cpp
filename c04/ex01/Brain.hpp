#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    protected:
        std::string *ideas;
    public:
        Brain();
        virtual ~Brain();
        Brain(Brain const &cpy);
        Brain const & operator=(Brain const &rhs);
        
        std::string* getIdeas() const;
        void        setIdeas(std::string *ideas);
};

#endif
