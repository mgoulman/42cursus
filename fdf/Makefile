# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgoulman <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/24 15:22:18 by mgoulman          #+#    #+#              #
#    Updated: 2019/07/29 20:50:40 by mgoulman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf
LIB = libft/libft.a
OBJ = srcs/get_next_line.o srcs/main.o srcs/ft_check_file.o srcs/draw_line.o srcs/function3.o srcs/functions.o srcs/ft_split_whitespaces.o srcs/function2.o
FLAG = -Wall -Wextra -Werror
MLX_LIB = -lmlx -framework OpenGL -framework AppKit

LIB_PATH = libft
SRC_DIR = srcs

all: $(NAME)
	    
$(NAME): $(LIB) $(OBJ)
	    gcc $(FLAG)  $(OBJ) $(LIB) $(MLX_LIB) -o $(NAME)
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
