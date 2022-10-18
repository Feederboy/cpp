#ifndef HUMANA_CLASS_HPP
# define HUMANA_CLASS_HPP
#include "Weapon.class.hpp"

class HumanA{
    private:
        std::string _name;
        Weapon      *_weapon;


    public:
        HumanA(std::string name);
        ~HumanA();
        void        set_weapon(Weapon &weapon);
        void        attack();

};


#endif