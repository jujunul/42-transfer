/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 14:14:03 by juthierr          #+#    #+#             */
/*   Updated: 2016/09/12 21:11:12 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fonctions.h"

int				doop(int a, int calc, int b)
{
	int result;
	int (*p[5]) (int, int);

	p[0] = add;
	p[1] = less;
	p[2] = multi;
	p[3] = div;
	p[4] = mod;
	if (calc == -1)
		return (0);
	result = (*p[calc])(a, b);
	return (result);
}

int				ft_test(char **argv)
{
	int calc;

	calc = -1;
	if (argv[2][0] == '+' && argv[2][1] == '\0')
		calc = 0;
	if (argv[2][0] == '-' && argv[2][1] == '\0')
		calc = 1;
	if (argv[2][0] == '*' && argv[2][1] == '\0')
		calc = 2;
	if (argv[2][0] == '/' && argv[2][1] == '\0')
		calc = 3;
	if (argv[2][0] == '%' && argv[2][1] == '\0')
		calc = 4;
	if (argv[2][0] == '/' && ft_atoi(argv[3]) == 0)
	{
		calc = -1;
		ft_putstr("Stop : division by zero");
	}
	if (argv[2][0] == '%' && ft_atoi(argv[3]) == 0)
	{
		calc = -1;
		ft_putstr("Stop : modulo by zero");
	}
	return (calc);
}

int				main(int argc, char **argv)
{
	int	calc;

	if (argc == 4)
	{
		calc = ft_test(argv);
		ft_putnbr(doop(ft_atoi(argv[1]), calc, ft_atoi(argv[3])));
		ft_putchar('\n');
	}
	return (0);
}
