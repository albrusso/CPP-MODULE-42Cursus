# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: albrusso <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/15 13:15:27 by albrusso          #+#    #+#              #
#    Updated: 2024/03/15 15:52:48 by albrusso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RED=\033[1;31m
ORANGE=\033[1;38;5;208m
YELLOW=\033[1;33m
BLUE=\033[1;34m
GREEN=\033[1;32m
WHITE=\033[1;37m
RESET=\033[0m

NAME = strReplace
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@printf "$(WHITE)Compiling completed! $(BLUE)%-24s$(RESET)" "$(NAME)"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN)[OK]$(RESET) $(YELLOW)$(RESET)"

%.o: %.cpp
	@printf "$(WHITE)Compiling in progress... $(BLUE)%-20s$(RESET)" "$<"
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(GREEN)[OK]$(RESET)"

clean:
	@printf "$(WHITE)%-45s$(RESET)" "Cleaning in progress..."
	@$(RM) $(OBJ)
	@echo "$(GREEN)[OK]$(RESET) $(WHITE)Files removed:$(YELLOW) $(OBJ)$(RESET)"

fclean: clean
	@printf "$(WHITE)%-45s$(RESET)" "Cleaning in progress..."
	@$(RM) $(NAME)
	@echo "$(GREEN)[OK]$(RESET) $(WHITE)Executable removed:$(RED) $(NAME)$(RESET)"

re: fclean all

.PHONY: all clean fclean re