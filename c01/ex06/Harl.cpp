#include "Harl.class.hpp"

Harl::Harl()
{
    this->_list[0] = "DEBUG";
    this->_list[1] = "INFO";
    this->_list[2] = "WARNING";
    this->_list[3] = "ERROR";
    this->_func[0] = &Harl::debug;
    this->_func[1] = &Harl::info;
    this->_func[2] = &Harl::warning;
    this->_func[3] = &Harl::error;
    return ;
}

Harl::~Harl()
{
    return ;
}

void    Harl::complain(std::string level)
{
    int res = -1;
    for (int i = 0; i < 4; i++)
    {
        if (level.compare(this->_list[i]) == 0)
        {
            res = i;
        }
    }
    switch (res)
    {
    case 0:
        for (int i = 0; i < 4; i++)
            (this->*_func[i])();
        break;
    case 1:
        for (int i = 1; i < 4; i++)
            (this->*_func[i])();
        break;
    case 2:
        for (int i = 2; i < 4; i++)
            (this->*_func[i])();
        break;
    case 3:
        for (int i = 3; i < 4; i++)
            (this->*_func[i])();
        break;
    
    default:
        std::cout << std::endl << "Nothing to complain about" << std::endl;
        break;
    }
}

void    Harl::debug() const
{
    std::cout << "[DEBUG] : I love adding extra bacon for my 7XL-double-cheese-pickle-special-ketchup burger. I really do !" << std::endl;
    return ;
}

void    Harl::info() const
{
    std::cout << "[INFO] : I cannot believe adding extra bacon costs more noney. you didn 4t put enough vacon in my burger ! if you did, i wouldn't be asking for more !" << std::endl;
    return ;
}

void    Harl::warning() const
{
    std::cout << "[WARNING] : I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here sice last month." << std::endl;
    return ;
}

void    Harl::error() const
{
    std::cout << "[ERROR] : This is unacceptable ! I want to speak to the manager now." << std::endl;
    return ;
}

