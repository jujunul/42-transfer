/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 18:30:55 by juthierr          #+#    #+#             */
/*   Updated: 2016/09/08 11:29:00 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <ctype.h>

int			ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int len;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min + 1;
	if (!(*range = (int *)malloc((int)len)))
		return (0);
	while (min < max)
	{
		*range[i] = min;
		i++;
		min++;
	}
	return (len);
}
