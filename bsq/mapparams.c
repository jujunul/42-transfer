/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapparams.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeldame <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 13:36:15 by bbeldame          #+#    #+#             */
/*   Updated: 2016/09/21 19:16:27 by bbeldame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"
#include <stdlib.h>

int			bsqatoi(char *str, int size)
{
	int		res;

	res = 0;
	while (*str >= 48 && *str <= 57 && size)
	{
		res = res * 10 + *str++ - 48;
		size--;
	}
	return ((size != 0) ? -1 : res);
}

void		map_params(t_infomap *infomap)
{
	int			len;

	len = 0;
	while (infomap->line[len])
		len++;
	if (len < 4)
		ft_printerror();
	infomap->full = infomap->line[--len];
	infomap->obs = infomap->line[--len];
	infomap->empty = infomap->line[--len];
	infomap->nblines = bsqatoi(infomap->line, len);
}

t_infomap	*start_params(char *para)
{
	t_infomap	*infomap;

	if (!(infomap = malloc(sizeof(t_infomap))))
		ft_printerror();
	infomap->line = para;
	if (g_cani)
		map_params(infomap);
	return (infomap);
}
