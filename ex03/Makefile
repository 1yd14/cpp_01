# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lyvan-de <lyvan-de@student.codam.nl>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/16 16:39:31 by lyvan-de          #+#    #+#              #
#    Updated: 2025/07/16 16:42:57 by lyvan-de         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = violence

CFLAGS = -Wall -Wextra -Werror -std=c++11
CC = c++
INC = -I./inc

SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re
