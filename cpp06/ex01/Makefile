# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/23 17:39:06 by pablogon          #+#    #+#              #
#    Updated: 2025/04/30 17:20:04 by pablogon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

SRC = main.cpp Serializer.cpp Data.cpp
OBJ = $(SRC:.cpp=.o)
RM = rm -f

CC = clang++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address

#-------COLORS---------#
RED     := \033[31;1m
GREEN   := \033[32;1m
RESET   := \033[0m

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
	@ echo "$(GREEN)$(NAME) compiled$(RESET)\n"

%.o: %.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	@ echo "$(RED)$(NAME) deleted$(RESET)\n"

re: fclean all

.PHONY: all clean fclean re