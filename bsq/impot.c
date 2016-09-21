/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   impot.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 22:01:28 by juthierr          #+#    #+#             */
/*   Updated: 2016/09/21 22:01:34 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int				*ft_parsingtab(char *str, t_infomap *im, int columns)
{
	int i;
	int *tab;
	int len;
	int j;

	len = (columns + 1) * (im->nblines + 1);
	i = 0;
	j = 0;
	if (!(tab = (int *)malloc(sizeof(int) * len)))
		return (0);
	while (i < columns + 2)
		tab[i++] = 0;
	while (i <= len)
	{
		if (str[j] == im->empty)
			tab[i] = -1;
		if (str[j] == im->obs)
			tab[i] = 0;
		if (str[j] == '\n' && str[j + 1])
		{
			tab[i++] = -2;
			tab[i] = 0;
		}
		if (str[j + 1] == '\0')
			len = -1;
		j++;
		i++;
	}
	tab[i - 1] = -3;
	return (tab);
}

int			ft_columns(char *str, t_infomap *im)
{
	int i;
	int stock;
	int j;
	int l;

	i = 0;
	j = 0;
	l = 0;
	while (str[i] != '\n' && str[i] && (str[i] == im->empty ||
				str[i] == im->obs || str[i] == im->full))
		i++;
	stock = i;
	while (str[j])
	{
		i = 0;
		while (str[j] != '\n' && str[j] && (str[j] == im->empty ||
					str[j] == im->obs || str[j] == im->full))
		{
			j++;
			i++;
		}
		if (stock != i && g_cani == 1)
		{
			ft_printerror();
			return (0);
		}
		j++;
		l++;
	}
	if (l != im->nblines && i == stock && g_cani == 1)
		ft_printerror();
	return (++stock);
}
