# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lagirard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/18 15:47:42 by lagirard          #+#    #+#              #
#    Updated: 2016/11/18 15:47:44 by lagirard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

DISPLAY = ft_putstr.c ft_display_file.c main.c

INCLUDE = libft.h

FLAGS = -Wall -Werror -Wextra

all : $(NAME)

$(NAME) :
	gcc $(FLAGS) -o $(NAME) -I $(INCLUDE) $(DISPLAY)

clean :
	rm -rf all
	
fclean :	clean
	rm -rf $(NAME)
