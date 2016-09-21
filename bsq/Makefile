# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/16 13:09:32 by juthierr          #+#    #+#              #
#    Updated: 2016/09/21 14:40:16 by juthierr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

CODE = parse.c mapparams.c solve_this_shit.c

OBJET = parse.o mapparams.o solve_this_shit.o

all: $(NAME)

$(NAME):
		gcc -Wall -Wextra -Werror -c $(CODE)
		gcc -Wall -Wextra -Werror -o $(NAME) $(OBJET)

clean:
		rm -f $(OBJET)

fclean: clean
		rm -f $(NAME)

re: fclean all
