/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 13:37:49 by juthierr          #+#    #+#             */
/*   Updated: 2016/09/12 14:44:35 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_is_sort(int *tab, int lenght, int (*f)(int, int))
{
	int i;
	int order;

	i = 0;
	order = 0;
	while (order == 0 && i + 1 < lenght)
	{
		order = f(tab[i], tab[i + 1]);
		i++;
	}
	if (order < 0)
		order = -1;
	if (order > 0)
		order = 1;
	while (i + 1 < lenght)
	{
		if (order == 1 && f(tab[i], tab[i + 1]) < 0)
			return (0);
		if (order == -1 && f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}
