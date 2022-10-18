#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP
# include <iostream>
# include <string>
# include <sstream>
# include <stdio.h>
# include <stdlib.h>

class Zombie
{
    private:
        std::string     _name;
    
    public:
        Zombie(std::string name);
        ~Zombie();
        void        announce(void);
};

        void        randomChump(std::string name);




#endif