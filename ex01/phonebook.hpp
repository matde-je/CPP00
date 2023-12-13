/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matilde <matilde@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:43:38 by matilde           #+#    #+#             */
/*   Updated: 2023/12/05 11:26:08 by matilde          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>

//placing function declarations inside a class to encapsulate the implementation details
//the functions declared in the class definition have access to the private members of the class, without exposing them to external code
//other parts of the program can only access the public interface of the class
class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone;
        std::string secret;
    public:
        Contact();
        Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone, std::string secret);
        ~Contact();

        int     is_null(Contact contact);
        void    display(Contact contact);
        void    print_info(Contact contact, int i);
};

//Inheritance involves creating a new class that is a modified version of an existing class
//Inheritance is typically expressed using the class derived_class : public base_class syntax
//Composition involves combining different classes or objects to create a new class
//the PhoneBook class is composed of Contact objects
class PhoneBook
{
    private:
        Contact contact[9];
    public:
        PhoneBook();
        ~PhoneBook();

        PhoneBook del_first(PhoneBook pb);
        int check_pb(PhoneBook pb);
        PhoneBook    add(PhoneBook pb, int i);
        void        display(PhoneBook pb);
    
};

std::string  add_info(std::string msg);

#endif