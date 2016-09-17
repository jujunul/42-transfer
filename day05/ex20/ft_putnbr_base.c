/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 14:37:01 by juthierr          #+#    #+#             */
/*   Updated: 2016/09/06 18:00:31 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_mathpart(int nbr, int base)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = (nbr) * (-1);
	}
	if (nbr >= base)
		ft_mathpart(nbr / base, base);
	if ((nbr % base) > 9)
		ft_putchar(((nbr % base) - 10) + 'A');
	else if ((nbr % base) <= 9)
		ft_putchar((nbr % base) + '0');
}

void		ft_putnbr_base(int nbr, char *base)
{
	int			i;
	int			j;
	char		test[50];

	i = 0;
	while (base[i])
	{
		j = 0;
		test[i] = base[i];
		i++;
		while (j < i)
		{
			if (test[j] == base[i] || test[j] == '+' || test[j] == '-'
					&& base[i] < 32)
				return ;
			j++;
		}
	}
	if (i < 2)
		return ;
	ft_mathpart(nbr, i);
}
