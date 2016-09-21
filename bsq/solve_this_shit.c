/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_this_shit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeldame <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 14:16:56 by bbeldame          #+#    #+#             */
/*   Updated: 2016/09/21 18:15:16 by bbeldame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_lib.h"
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	put_square(int *bsq, int columns, t_bg *bg)
{
	int itop;
	int x;
	int y;

	itop = bg->i - (columns * (bg->size - 1)) - (2 * bg->size - 1) + 1;
	x = 0;
	while (x < bg->size)
	{
		y = 0;
		while (y < bg->size)
		{
			bsq[itop + x + (y * (columns + 1))] = -4;
			y++;
		}
		x++;
	}
}

void	display(int *bsq, int columns, t_infomap *im)
{
	int i;
	char *str;
	int j;
	int len;

	len = columns * im->nblines;
	j = 0;	
	if (!(str = malloc(sizeof(char) * len)))
		return ;
	i = columns + 2;
	while (bsq[i] != -3)
	{
		if (bsq[i] > 0)
			str[j] = im->empty;
		if (bsq[i] == 0)
			str[j] = im->obs;
		if (bsq[i] == -2)
		{
			str[j] = '\n';
			i++;
		}
		if (bsq[i] == -4)
			str[j] = im->full;
		i++;
		j++;
	}
	str[j] = '\n';
	str[++j] = '\0';
	write(1, str, len);
}

int		square_capacity(int *bsq, int i, int columns)
{
	int min;

	min = bsq[i - columns - 2];
	if (bsq[i - columns - 1] < min)
		min = bsq[i - columns - 1];
	if (bsq[i - 1] < min)
		min = bsq[i - 1];
	return (min + 1);
}

void	solve_bsq(int *bsq, int columns, t_infomap *im)
{
	int		i;
	t_bg	truc;
	t_bg 	*bg;

	bg = &truc;
	bg->size = 0;
	bg->i = 0;

	i = columns + 1;
	while (bsq[i] != -3)
	{
		if (bsq[i] == -1)
		{
			bsq[i] = square_capacity(bsq, i, columns);
			if (bsq[i] > bg->size)
			{
				bg->size = bsq[i];
				bg->i = i;
			}
		}
		i++;
	}
	if (bg->size == 0)
		ft_printerror();
	put_square(bsq, columns, bg);
	display(bsq, columns, im);
}
