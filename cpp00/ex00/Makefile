# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/19 13:38:56 by pablogon          #+#    #+#              #
#    Updated: 2024/12/19 13:51:39 by pablogon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)
CC = g++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = phone
all: $(NAME)
$(NAME): $(OBJ)
    $(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
clean:
    $(RM) $(OBJ)
fclean: clean
    $(RM) $(NAME)
re: fclean $(NAME)
.PHONY: all clean fclean re