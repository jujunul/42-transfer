/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 12:56:42 by juthierr          #+#    #+#             */
/*   Updated: 2016/09/12 13:20:32 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <ctype.h>

int			*ft_map(int *tab, int lenght, int (*f)(int))
{
	int *map;
	int i;

	i = 0;
	if (!(map = (int *)malloc(sizeof(int) * lenght)))
		return (NULL);
	while (i < lenght)
	{
		map[i] = f(tab[i]);
		i++;
	}
	return (map);
}
