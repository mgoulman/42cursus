# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgoulman <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/30 15:39:26 by mgoulman          #+#    #+#              #
#    Updated: 2019/10/03 17:37:17 by mgoulman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_ls
LIB = libft/libft.a
OBJ = srcs/main.o
FLAG = -Wall -Wextra -Werror

LIB_PATH = libft
SRC_DIR = srcs

all: $(NAME)

$(NAME): $(LIB) $(OBJ)
	gcc $(FLAG)  $(OBJ) $(LIB) -o $(NAME)
%.o : %.c
	gcc $(FLAG) -c $< -o $@
$(LIB):
	make -C $(LIB_PATH)
clean:
	make clean -C $(LIB_PATH)
	rm -f $(SRC_DIR)/*.o

fclean: clean
	make fclean -C $(LIB_PATH)
	/bin/rm -f $(NAME)

re: fclean all
