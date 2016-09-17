/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 16:38:58 by juthierr          #+#    #+#             */
/*   Updated: 2016/09/09 16:41:22 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_max(int *tab, int lenght)
{
	int i;
	int stock;

	i = 0;
	stock = 0;
	while (i < lenght)
	{
		if (tab[i] > stock)
			stock = tab[i];
		i++;
	}
	return (stock);
}
