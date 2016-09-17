/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 14:46:15 by juthierr          #+#    #+#             */
/*   Updated: 2016/09/01 14:54:06 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_ultimate_div_mod(int *a, int *b)
{
	int stocka;
	int stockb;

	stocka = ((*a) / (*b));
	stockb = ((*a) % (*b));
	*a = stocka;
	*b = stockb;
}
