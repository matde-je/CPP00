/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matilde <matilde@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:27:28 by matilde           #+#    #+#             */
/*   Updated: 2023/12/05 11:34:42 by matilde          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

//add search quit
//4 columns: index, first name, last name and nickname
//pipe separating
//if its too long -> dot
//aligned on the right
//10 chars
int main()
{
    PhoneBook pb;
    std::string cmd;
    int i;
    while (1)
    {
        std::cout << "Enter a command: ";
        getline(std::cin,cmd);
        if (cmd == "EXIT")
            break;
        else if (cmd == "ADD")
        {
            i = pb.check_pb(pb);
            while (i > 7)
            {
                std::cout << "Phonebook fully booked. Oldest contact will be deleted if added a new one. (Y/N): ";
                std::getline(std::cin, cmd);
                if (cmd == "Y")
                {
                    pb = pb.del_first(pb);
                    i = 7;
                }
                else if (cmd == "N")
                    i = -1;
                else
                    std::cout << "Unvalid char.\n";
            }
            if (i >= 0)
                pb = pb.add(pb, i);
        }
        else if (cmd == "SEARCH")
            pb.display(pb);
        else if (cmd.empty())
            continue ;
    }
}