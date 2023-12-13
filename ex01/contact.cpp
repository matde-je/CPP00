/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matilde <matilde@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:47:41 by matilde           #+#    #+#             */
/*   Updated: 2023/12/05 11:06:08 by matilde          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

//parameterized constructor creates an object of the Contact class and init variables with values provided as arguments//this pointer is a keyword that represents the address of the current instance of the class. It is a hidden parameter that is passed to all member function calls, allowing those functions to access the object's member variables and methods
//'this' pointer is a keyword that represents the address of the current instance of the class. 
//this pointer refers to the current instance of the Contact class
//It is a hidden parameter that is passed to all member function calls, allowing those functions to access the object's member variables and methods.
//you can use the this pointer in member functions other than constructors
Contact::Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone, std::string secret)
{
    this->first_name = first_name;
    this->last_name = last_name;
    this->nickname = nickname;
    this->phone = phone;
    this->secret = secret;
}

//you can have more than one constructor inside a class
//Each constructor can have a different parameter list, allowing you to create objects in various ways.
Contact::Contact(void)
{
    return ;
}

//destructor
Contact::~Contact(void)
{
    return ;
}

int     Contact::is_null(Contact contact)
{
    if (contact.first_name.empty() == true)
        return (1);
    return (0);
}

//Flushing the stream forces any buffered output in the stream to be written immediately
//std::endl in an output statement, inserts a newline and flushes the output buffer
//ensures that the output buffer is immediately written to the associated output device
//output visible immediately
void    Contact::display(Contact contact)
{
    std::cout << "First name: " << contact.first_name << '\n';
    std::cout << "Last name: " << contact.last_name << '\n';
    std::cout << "Nickname: " << contact.nickname << '\n';
    std::cout << "Phone number: " << contact.phone << '\n';
    std::cout << "Darkest secret: " << contact.secret << '\n';
}

//SEARCH
//print_info is a member of the Contact class
//iterator: int
//if less than 10 chars, the output will be right-aligned within the 10-char field
void Contact::print_info(Contact contact, int i)
{
    if (i == 1)
    {
        if (contact.first_name.size() > 10)
            std::cout << std::string(contact.first_name.begin(), contact.first_name.begin() + 9) << ".|";
        else
            std::cout << std::setw(10) << contact.first_name << "|";
    }
    else if (i == 2)
    {
        if (contact.last_name.size() > 10)
            std::cout << std::string(contact.last_name.begin(), contact.last_name.begin() + 9) << ".|";
        else
            std::cout << std::setw(10) << contact.last_name << "|";
    }
    else if (i == 3)
    {
        if (contact.nickname.size() > 10)
            std::cout << std::string(contact.nickname.begin(), contact.nickname.begin() + 9) << ".|\n";
        else
            std::cout << std::setw(10) << contact.nickname << "|\n";
    }
}
