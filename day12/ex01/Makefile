# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/14 13:49:16 by juthierr          #+#    #+#              #
#    Updated: 2016/09/15 23:39:06 by juthierr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c main.c aff.c
	gcc -Wall -Wextra -Werror -o $(NAME) main.o aff.o

clean:
	rm -f main.o aff.o

fclean: clean
	rm -f $(NAME)

re: fclean all
