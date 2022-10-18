/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matt <matt@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:37:54 by matt              #+#    #+#             */
/*   Updated: 2022/10/18 11:10:26 by matt             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
# include <iostream>
# include <string>
# include <sstream>
# include <stdio.h>
# include <stdlib.h>
#include "Contact.class.hpp"


class PhoneBook
{
    private:
        Contact     _list[8];
    
    public:
    PhoneBook();
    ~PhoneBook();
    void    delete_older();
    void    setcontact();
    void    print_book();
    void    search();
    void    aff_contacts();
    int     get_user_index();

};

#endif