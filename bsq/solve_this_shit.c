/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_this_shit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeldame <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 14:16:56 by bbeldame          #+#    #+#             */
/*   Updated: 2016/09/20 14:20:12 by bbeldame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "infomap.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	put_square(int *bsq, int columns, t_bg *bg)
{
	int i;

	i = 0;
	while (i < bg->size && bg->size > 0)
	{
		bsq[bg->i - i] = -4;
		if (i > 0)
		{
			bsq[bg->i - columns * i] = -4;
			bsq[bg->i - columns * i - i] = -4;
		}
		i++;
	}
}

void	display(int *bsq, int columns, t_infomap *im)
{
	int i;

	i = columns + 1;
	while (bsq[i] != -3)
	{
		if (bsq[i] > 0)
			ft_putchar(im->empty);
		if (bsq[i] == 0)
			ft_putchar(im->obs);
		if (bsq[i] == -2)
		{
			ft_putchar('\n');
			i++;
		}
		if (bsq[i] == -4)
			ft_putchar(im->full);
		i++;
	}
	ft_putchar('\n');
}

int		square_capacity(int *bsq, int i, int columns)
{
	int min;

	min = bsq[i - columns - 1];
	if (bsq[i - columns] < min)
		min = bsq[i - columns];
	if (bsq[i - 1] < min)
		min = bsq[i - 1];
	return (min + 1);
}

void	solve_bsq(int *bsq, t_bg *bg, int columns)
{
	int i;

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
}
