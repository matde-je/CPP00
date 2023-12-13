/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matilde <matilde@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:53:21 by matilde           #+#    #+#             */
/*   Updated: 2023/11/29 14:09:43 by matilde          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

//In C++ the order of execution of static constructors and destructors is not guaranteed across translation units (source files)
//However, within a translation unit, the order is well-defined
//constructor and destructor. The constructor is executed before main() starts, and the destructor is called when the program exits
//destructors are called in the reverse order of their definition when the program exits
//std::endl puts new line at the end
int main(int argc, char **argv)
{
    int i;
    int j;
    
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    i = 0;
    while (argv[++i])
    {
        j = -1;
        while (argv[i][++j])
            std::cout << (char) toupper(argv[i][j]);
    }
    std::cout << "\n";
    return (0);
}