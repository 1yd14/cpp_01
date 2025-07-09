# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lyvan-de <lyvan-de@student.codam.nl>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/09 15:55:53 by lyvan-de          #+#    #+#              #
#    Updated: 2025/07/09 15:56:53 by lyvan-de         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 

CFLAGS = -Wall -Wextra -Werror -std=c++11
CC = g++
INC = -I./inc

SRC = 
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
