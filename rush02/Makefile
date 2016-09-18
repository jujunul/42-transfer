# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/14 13:49:16 by juthierr          #+#    #+#              #
#    Updated: 2016/09/14 16:24:05 by juthierr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c main.c colle.c aff.c last.c
	gcc -Wall -Wextra -Werror -o $(NAME) main.o colle.o aff.o last.o

clean:
	rm -f main.o colle.o aff.o last.o

fclean: clean
	rm -f $(NAME)

re: fclean all
