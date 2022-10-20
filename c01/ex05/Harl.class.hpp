#ifndef HARL_CLASS_HPP
#define HARL_CLASS_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

class Harl
{
    private:
        std::string     _list[4];
        void            (Harl::*_func[4]) () const;


    public:
        Harl();
        ~Harl();
        void            complain(std::string level);
        void            debug(void) const;
        void            info() const;
        void            warning() const;
        void            error() const;

};

#endif