# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/15 10:48:57 by mdarriga          #+#    #+#              #
#    Updated: 2015/06/15 11:00:42 by mdarriga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CC = clang++
CFLAGS = -Wall -Werror -Wextra

SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o:%.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm $(OBJ)

fclean: clean
	rm $(NAME)

re: fclean all

,PHONY: all clean fclean re