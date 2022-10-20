#ifndef WEAPON_CLASS_HPP
# define WEAPON_CLASS_HPP
# include <iostream>
# include <string>
# include <sstream>
# include <stdio.h>
# include <stdlib.h>

class Weapon{
    private:
        std::string     _type;
    
    public:
        Weapon();
        Weapon(std::string type);
        ~Weapon();
        std::string     getType() const;
        void            setType(std::string type);




};







#endif