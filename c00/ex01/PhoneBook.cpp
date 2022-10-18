/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matt <matt@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 09:18:09 by matt              #+#    #+#             */
/*   Updated: 2022/10/18 11:54:48 by matt             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook()
{
    return ;
}

PhoneBook::~PhoneBook()
{
    return ;
}

void    PhoneBook::delete_older()
{
    for (int i = 0; i < 7; i++)
        this->_list[i] = this->_list[i + 1];
}

void    PhoneBook::setcontact()
{
    this->_list[7].setcont();
}

void    PhoneBook::print_book()
{
    std::cout << "\t     ";
	std::cout << std::string(32, '-') << std::endl;
	std::cout << "\t    |" << std::setw(10) << std::right << "FIRST NAME";
	std::cout << "|" << std::setw(10) << std::right << "LAST NAME";
	std::cout << "|" << std::setw(10) << std::right << "NICKNAME";
	std::cout << "|" << std::endl;
	std::cout << "\t " << std::string(36, '-') << std::endl;  
	for(int i = 0; i < 8; i++)
	{
		std::cout << "\t| " << i + 1 << " ";
		std::cout << "|" << std::setw(10) << std::right << this->_list[i].get_firstname(); 
		std::cout << "|" << std::setw(10) << std::right << this->_list[i].get_lastname(); 
		std::cout << "|" << std::setw(10) << std::right << this->_list[i].get_nickname(); 
		std::cout << "|" << std::endl;
		std::cout << "\t ";
		std::cout << std::string(36, '-') << std::endl;  
	}
}

void    PhoneBook::search()
{
    aff_contacts();

}

void    PhoneBook::aff_contacts()
{
    int index = -2;
    
    this->print_book();
    index = get_user_index();
    while (index <= 0 || index >= 9)
    {
        if (index == -1)
            return ;
        index = get_user_index();
    }
    std::cout << std::endl << "\tName: " << "[" << this->_list[index - 1].get_firstname() << "]" << std::endl;
	std::cout << "\tLast Name: " << "[" << this->_list[index - 1].get_lastname() << "]" << std::endl;
	std::cout << "\tNickname: " << "[" << this->_list[index - 1].get_nickname() << "]" << std::endl;
	std::cout << "\tPhone: " << "[" << this->_list[index - 1].get_phonenumber() << "]" << std::endl;
	std::cout << "\tDarkest Secret: " << "[" << this->_list[index - 1].get_darkestsecret() << "]" << std::endl;
	return ;
}

int     PhoneBook::get_user_index()
{
    int                 res;
    std::string         buff;
    std::stringstream   tmp;

    std::cout << "Enter contact index between 1 and 8 or type EXIT" << std::endl;
    std::getline(std::cin, buff);
    if (buff.compare("EXIT") == 0)
        return (-1);
    tmp << buff;
    tmp >> res;
    if (res < 1 || res > 8)
    {
        return (res);
    }
    else
    {
        std::cout << "Accessing contact index " << res << std::endl;
        return (res);
    }
}
