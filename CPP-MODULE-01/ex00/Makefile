# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: albrusso <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/05 13:37:56 by albrusso          #+#    #+#              #
#    Updated: 2024/03/11 15:45:19 by albrusso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	zombie
CC			=	c++
CFLAGS		=	-Wall -Wextra -Werror  -std=c++98
RM			=	rm -f
SRC			=	main.cpp \
				Zombie.cpp \
				newZombie.cpp \
				randomChump.cpp
OBJ			=	$(SRC:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re