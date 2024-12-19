# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/19 13:45:19 by pablogon          #+#    #+#              #
#    Updated: 2024/12/19 13:51:44 by pablogon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Contact.cpp  main.cpp Phonebook.cpp
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