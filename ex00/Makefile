# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lyvan-de <lyvan-de@student.codam.nl>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/09 15:55:53 by lyvan-de          #+#    #+#              #
#    Updated: 2025/07/16 15:11:00 by lyvan-de         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

CFLAGS = -Wall -Wextra -Werror -std=c++11
CC = c++
INC = -I./inc

SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
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
