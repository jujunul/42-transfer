# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/16 13:09:32 by juthierr          #+#    #+#              #
#    Updated: 2016/09/21 22:04:50 by juthierr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

CODE = main.c mapparams.c solve_this_shit.c impot.c alloc.c

OBJET = main.o mapparams.o solve_this_shit.o impot.o alloc.o

all: $(NAME)

$(NAME):
		gcc -Wall -Wextra -Werror -c $(CODE)
		gcc -Wall -Wextra -Werror -o $(NAME) $(OBJET)

clean:
		rm -f $(OBJET)

fclean: clean
		rm -f $(NAME)

re: fclean all
