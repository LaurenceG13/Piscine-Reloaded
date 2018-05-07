# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lagirard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/18 11:59:22 by lagirard          #+#    #+#              #
#    Updated: 2016/11/18 12:30:07 by lagirard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ft_putchar.c ft_putstr.c ft_display_file.c main.c

HEADER = libft.h

FLAGS = -Wall -Werror -Wextra

all : $(NAME)

$(NAME) : 
	gcc $(FLAGS) -o $(NAME) -I $(HEADER) $(SRC)

clean :
	rm -rf all

fclean :	clean
	rm -rf $(NAME)
