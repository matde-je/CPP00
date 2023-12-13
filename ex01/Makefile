# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matilde <matilde@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/28 17:53:12 by matilde           #+#    #+#              #
#    Updated: 2023/11/29 14:50:14 by matilde          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
 
SRCS = contact.cpp phonebook.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)

FLAGS = clang++ -Wall -Wextra -Werror -std=c++98

%.o: %.cpp
	$(FLAGS) -c $< -o $@

all : $(NAME)

$(NAME)	: $(OBJS)
	$(FLAGS) $^ -o $(NAME)

fclean		: clean
	rm -f $(NAME)

clean		:
	rm -f $(OBJS)

re			:	fclean all

.PHONY		:	all clean fclean re