# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lyvan-de <lyvan-de@student.codam.nl>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/18 17:49:02 by lyvan-de          #+#    #+#              #
#    Updated: 2025/07/19 17:08:16 by lyvan-de         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = program

CFLAGS = -Wall -Wextra -Werror -std=c++11
CC = c++

SRC = main.cpp 
OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re
