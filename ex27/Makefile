# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bpisano <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 16:29:30 by bpisano           #+#    #+#              #
#    Updated: 2017/11/07 16:32:46 by bpisano          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ft_read.c

FLAGS = -Wall -Werror -Wextra

$(NAME):
	gcc $(FLAGS) -o $(NAME) $(SRC)

all: $(NAME)

clean:
	rm -f test.o

fclean: clean
	rm -f $(NAME)

re: fclean all
