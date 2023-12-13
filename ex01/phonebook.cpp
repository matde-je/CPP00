/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matilde <matilde@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:42:34 by matilde           #+#    #+#             */
/*   Updated: 2023/12/05 11:27:08 by matilde          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

//constructor
//compiler automatically calls constructors when defining class objects and calls destructors when class objects go out of scope
//no return value
PhoneBook::PhoneBook(void)
{
	return ;
}

//destructor
PhoneBook::~PhoneBook(void)
{
	return ;
}

//ADD
//std::cin : character input
//getline() == readline()
std::string  add_info(std::string msg)
{
    std::string dest;
    std::cout << msg;
    std::getline(std::cin, dest);
    if (dest.empty() == true)
        return (NULL);
    return (dest);
}

PhoneBook    PhoneBook::add(PhoneBook pb, int i)
{
    Contact new_(add_info("First name: "), add_info("Last name: "),
                        add_info("Nickname: "),add_info("Phone number: "),
                        add_info("Darkest secret: "));
    pb.contact[i] = new_;
    return (pb);
}

//check if null and return where it is null or the length of pb
int PhoneBook::check_pb(PhoneBook pb)
{
    int i = -1;
    while (++i < 8)
        if (pb.contact[i].is_null(pb.contact[i]) == 1)
            break ;
    return (i);
}

//del the first number
PhoneBook PhoneBook::del_first(PhoneBook pb)
{
    int i = -1;
    while (++i < 7)
        pb.contact[i] = pb.contact[i + 1];
    return (pb);
}

//SEARCH
//continue: next iteration of the loop
void        PhoneBook::display(PhoneBook pb)
{
    int i = -1;
    std::string index;
    if (pb.contact[0].is_null(pb.contact[0]))
    {
        std::cout << "Your phonebook is empty.\n";
        return ;
    }
    std::cout << "     Index|" << "First name|" << " Last name|" << "   Nickname" << '\n';
    while (++i < 8)
    {
        if (pb.contact[i].is_null(pb.contact[i]))
            break ;
        std::cout << std::setw(10) << i << "|";
        contact[i].print_info(contact[i], 1);
        contact[i].print_info(contact[i], 2);
        contact[i].print_info(contact[i], 3);
    }
    while (1)
    {
        std::cout << "Select index: ";
        getline(std::cin, index);
        if (index.empty())
            continue ;
        if (index[0] >= '0' && index[0] <= '9' && index[0] <= ('0' + i -1))
            i = (int)index[0] - 48;
        else
        {
            std::cout << "Enter a valid number: " << '\n';
            continue;
        }
        pb.contact[i].display(pb.contact[i]);
        break ;
    }
}
