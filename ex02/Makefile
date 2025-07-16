# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lyvan-de <lyvan-de@student.codam.nl>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/16 16:19:03 by lyvan-de          #+#    #+#              #
#    Updated: 2025/07/16 16:32:03 by lyvan-de         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = hi_this_is_brain

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