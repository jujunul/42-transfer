/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapparams.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeldame <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 13:36:15 by bbeldame          #+#    #+#             */
/*   Updated: 2016/09/21 22:01:08 by bbeldame         ###   ########.fr       */
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

void		map_params(t_infomap *im)
{
	int			len;

	len = 0;
	while (im->line[len])
		len++;
	if (len < 4)
		ft_printerror();
	im->full = im->line[--len];
	im->obs = im->line[--len];
	im->empty = im->line[--len];
	im->nblines = bsqatoi(im->line, len);
	if ((im->full == im->obs || im->obs == im->empty || im->full == im->empty)
			&& g_cani == 1)
		ft_printerror();
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
