# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/19 13:45:19 by pablogon          #+#    #+#              #
#    Updated: 2025/03/06 18:53:47 by pablogon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phone

SRC = Contact.cpp  main.cpp Phonebook.cpp

OBJ = $(SRC:.cpp=.o)
RM = rm -f

CC = g++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

#-------COLORS---------#
RED		:= \033[31;1m
GREEN	:= \033[32;1m
RESET	:= \033[0m

all: $(NAME)
$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
	@ echo "$(GREEN)$(NAME) compiled$(RESET)\n"
	
clean:
	$(RM) $(OBJ)
	
fclean: clean
	$(RM) $(NAME)
	@ echo "$(RED)$(NAME) deleted$(RESET)\n";
	
re: fclean $(NAME)
.PHONY: all clean fclean re