/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/30 17:41:54 by juthierr          #+#    #+#             */
/*   Updated: 2016/09/01 13:25:25 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '/';
	while (a++ < '9')
	{
		b = '0';
		while (b++ < '9')
		{
			c = '0';
			while (c++ < '9')
				if (a < b && b < c && a < c)
				{
					ft_putchar(a);
					ft_putchar(b);
					ft_putchar(c);
					if ((a != '7') || (c != '9'))
					{
						ft_putchar(',');
						ft_putchar(' ');
					}
				}
		}
	}
}
