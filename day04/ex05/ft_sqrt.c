/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 19:28:03 by juthierr          #+#    #+#             */
/*   Updated: 2016/09/03 19:43:40 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int test;
	int racine;

	test = 0;
	racine = 1;
	while (racine <= nb / 2)
	{
		test = racine * racine;
		if (test == nb)
			return (racine);
		racine++;
	}
	return (0);
}
