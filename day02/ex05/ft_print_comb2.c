/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 13:58:46 by juthierr          #+#    #+#             */
/*   Updated: 2016/09/01 13:23:03 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_test_result(char a, char b, char x, char y)
{
	if (a != x || b != y)
	{
		if (((a != '0') || (b != '0')) || ((x != '0') || (y != '1')))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(' ');
		ft_putchar(x);
		ft_putchar(y);
	}
}

void		ft_print_comb2(void)
{
	char a;
	char b;
	char x;
	char y;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			x = '0';
			while (x <= '9')
			{
				y = '0';
				while (y++ < '9')
				{
					ft_test_result(a, b, x, y);
				}
				x++;
			}
			b++;
		}
		a++;
	}
}
