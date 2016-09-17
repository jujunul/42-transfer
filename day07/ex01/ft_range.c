/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 18:14:06 by juthierr          #+#    #+#             */
/*   Updated: 2016/09/08 10:52:48 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <ctype.h>

int		*ft_range(int min, int max)
{
	int *stock;
	int len;
	int i;

	if (min >= max)
		return (NULL);
	len = max - min + 1;
	if (!(stock = (int*)malloc((int)len)))
		return (NULL);
	i = 0;
	while (min < max)
	{
		stock[i] = min;
		i++;
		min++;
	}
	return (stock);
}
