/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 00:07:51 by juthierr          #+#    #+#             */
/*   Updated: 2016/09/02 23:39:31 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_sort_integer_table(int *tab, int size)
{
	int i;
	int j;
	int tmp;
	int tmpval;

	i = 0;
	while (i < size)
	{
		tmp = -1;
		j = i;
		while(++j < size)
		{
			if (tab[i] > tab[j] && (tab[j] > tab[tmp] || tmp == -1))
			{
				tmp = j;
			}
		}
		if (tmp >= 0)
		{
			tmpval = tab[i];
			tab[i] = tab[tmp];
			tab[tmp] = tmpval;
		}
		i++;
	}
}
