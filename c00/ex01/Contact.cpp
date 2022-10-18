#include "Contact.class.hpp"

Contact::Contact()
{
    std::cout << "CONTACT CREATED";
    std::cout << std::endl;
    return ;
}
Contact::~Contact()
{
    std::cout << "CONTACT REMOVED";
    std::cout << std::endl;
    return ;
}

void    Contact::set_firstname()
{
    std::string res;
    
    std::cout << "Enter first name: ";
    std::getline(std::cin, res);
    if (res.length() < 1)
    {
        std::cout << "Cannot be empty. type again:" << std::endl;
        std::getline(std::cin, res);
    }
    this->_firstname = res;
}

void    Contact::set_lastname()
{    
    std::string res;
    
    std::cout << "Enter last name: ";
    std::getline(std::cin, res);
    if (res.length() < 1)
    {
        std::cout << "Cannot be empty. type again: " << std::endl;
        std::getline(std::cin, res);
    }
    this->_lastname = res;
}

void    Contact::set_nickname()
{
    std::string res;
    
    std::cout << "Enter nick name: ";
    std::getline(std::cin, res);
    if (res.length() < 1)
    {
        std::cout << "Cannot be empty. type again: " << std::endl;
        std::getline(std::cin, res);
    }
    this->_nickname = res;

}

void    Contact::set_phonenumber()
{
    std::string res;

    std::cout << "Enter phone number: ";
    std::getline(std::cin, res);
    if (res.length() < 1)
    {
        std::cout << "Cannot be empty. type again: " << std::endl;
        std::getline(std::cin, res);
    }
    this->_phonenumber = res;
}

void    Contact::set_darkestsecret()
{
    std::string res;

    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, res);
    if (res.length() < 1)
    {
        std::cout << "Cannot be empty. type again: " << std::endl;
        std::getline(std::cin, res);
    }
    this->_darkestsecret = res;
}

void    Contact::setcont()
{
    this->set_firstname();
    this->set_lastname();
    this->set_nickname();
    this->set_phonenumber();
    this->set_darkestsecret();
}

std::string     Contact::get_firstname()
{
    return (this->_firstname);
}

std::string     Contact::get_lastname()
{
    return (this->_lastname);
}

std::string     Contact::get_nickname()
{
    return (this->_nickname);
}

std::string     Contact::get_phonenumber()
{
    return (this->_phonenumber);
}

std::string     Contact::get_darkestsecret()
{
    return (this->_darkestsecret);
}

void     Contact::print_firstname()
{
    std::cout << this->get_firstname();
}

void    Contact::print_lastname()
{
    std::cout << this->get_lastname();
}

void    Contact::print_nickname()
{
    std::cout << this->get_nickname();
}

void    Contact::print_phonenumber()
{
    std::cout << this->get_phonenumber();
}

void    Contact::print_darkest()
{
    std::cout << this->get_darkestsecret();
}

std::string     Contact::troncate_firstname()
{
    if (this->_firstname.length() < 10)
        return (this->_firstname);
    else
        return (this->_firstname.substr(0, 9) + '.');
}

std::string     Contact::troncate_lastname()
{
    if (this->_lastname.length() < 10)
        return (this->_lastname);
    else
        return (this->_lastname.substr(0, 9) + '.');
}

std::string     Contact::troncate_nickname()
{
    if (this->_nickname.length() < 10)
        return (this->_nickname);
    else
        return (this->_nickname.substr(0, 9) + '.');
}

std::string     Contact::troncate_phonenumber()
{
    if (this->_phonenumber.length() < 10)
        return (this->_phonenumber);
    else
        return (this->_phonenumber.substr(0, 9) + '.');
}

std::string     Contact::troncate_darkestsecret()
{
    if (this->_darkestsecret.length() < 10)
        return (this->_darkestsecret);
    else
        return (this->_darkestsecret.substr(0, 9) + '.');
}