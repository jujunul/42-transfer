/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   impot.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeldame <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 22:05:05 by bbeldame          #+#    #+#             */
/*   Updated: 2016/09/21 23:17:53 by bbeldame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

void			shitbro(char *str, t_infomap *im, int *tab, int *ij)
{
	while (ij[0] <= ij[2])
	{
		if (str[ij[1]] == im->empty)
			tab[ij[0]] = -1;
		if (str[ij[1]] == im->obs)
			tab[ij[0]] = 0;
		if (str[ij[1]] == '\n' && str[ij[1] + 1])
		{
			tab[ij[0]++] = -2;
			tab[ij[0]] = 0;
		}
		if (str[ij[1] + 1] == '\0')
			ij[2] = -1;
		ij[0]++;
		ij[1]++;
	}
	tab[ij[0] - 1] = -3;
}

int				*ft_parsingtab(char *str, t_infomap *im, int columns)
{
	int *tab;
	int	ij[3];

	ij[0] = 0;
	ij[1] = 0;
	ij[2] = (columns + 1) * (im->nblines + 1);
	if (!(tab = (int *)malloc(sizeof(int) * ij[2])))
		return (0);
	while (ij[0] < columns + 2)
		tab[ij[0]++] = 0;
	shitbro(str, im, tab, ij);
	return (tab);
}

int				*normetamer(int *op, char *str, t_infomap *im)
{
	while (str[op[0]] != '\n' && str[op[0]] && (str[op[0]] == im->empty ||
				str[op[0]] == im->obs || str[op[0]] == im->full))
		op[0]++;
	op[3] = op[0];
	while (str[op[1]])
	{
		op[0] = 0;
		while (str[op[1]] != '\n' && str[op[1]] && (str[op[1]] == im->empty ||
					str[op[1]] == im->obs || str[op[1]] == im->full))
		{
			op[1]++;
			op[0]++;
		}
		if (op[3] != op[0] && g_cani == 1)
		{
			ft_printerror();
			return (0);
		}
		op[2]++;
		op[1]++;
	}
	return (op);
}

int				ft_columns(char *str, t_infomap *im)
{
	int *op;

	op = (int*)malloc(sizeof(int) * 4);
	op[0] = 0;
	op[1] = 0;
	op[2] = 0;
	if (!(op = normetamer(op, str, im)))
		return (0);
	if (op[2] != im->nblines && op[0] == op[3] && g_cani == 1)
		ft_printerror();
	return (++op[3]);
}
