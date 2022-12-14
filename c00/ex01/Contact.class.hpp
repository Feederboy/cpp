/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maquentr <maquentr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:38:36 by matt              #+#    #+#             */
/*   Updated: 2022/12/14 12:38:55 by maquentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <sstream>
# include <stdio.h>
# include <stdlib.h>

class Contact
{
    private:
        std::string _firstname;
        std::string _lastname;
        std::string _nickname;
        std::string _phonenumber;
        std::string _darkestsecret;

        void				set_firstname();
		    void				set_lastname();
		    void				set_nickname();
	    	void				set_phonenumber();
	    	void				set_darkestsecret();

    public:
        Contact();
        ~Contact();
        void    setcont();
        std::string     get_firstname();
        std::string     get_lastname();
        std::string     get_nickname();
        std::string     get_phonenumber();
        std::string     get_darkestsecret();
        void            set_contact();
        void            print_firstname();
        void            print_lastname();
        void            print_nickname();
        void            print_phonenumber();
        void            print_darkest();
        std::string     troncate_firstname();
        std::string     troncate_lastname();
        std::string     troncate_nickname();
        std::string     troncate_phonenumber();
        std::string     troncate_darkestsecret();

 
  };









#endif