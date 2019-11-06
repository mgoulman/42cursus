# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aeddaqqa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/30 18:49:14 by aeddaqqa          #+#    #+#              #
#    Updated: 2019/09/19 14:34:37 by mgoulman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_*.c
INC = libft.h
CFLAG = -Wall -Wextra -Werror

OBJ = *.o

all : $(NAME)

$(NAME) :
	@gcc $(CFLAG) -c $(SRC) -I $(INC) 
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
clean :
	@rm -rf $(OBJ)
fclean : clean
	@rm -rf $(NAME)
re : fclean all
