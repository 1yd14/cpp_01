# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lyvan-de <lyvan-de@student.codam.nl>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/16 15:30:28 by lyvan-de          #+#    #+#              #
#    Updated: 2025/07/16 15:54:23 by lyvan-de         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = moar_zombie

CFLAGS = -Wall -Wextra -Werror -std=c++11
CC = c++
INC = -I./inc

SRC = main.cpp Zombie.cpp zombieHorde.cpp
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