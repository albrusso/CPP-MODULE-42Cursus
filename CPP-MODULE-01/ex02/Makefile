# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: albrusso <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/11 13:02:41 by albrusso          #+#    #+#              #
#    Updated: 2024/03/12 10:44:46 by albrusso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	strPtrRef
CC			=	c++
CFLAGS		=	-Wall -Wextra -Werror  -std=c++98
RM			=	rm -f
SRC			=	main.cpp
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