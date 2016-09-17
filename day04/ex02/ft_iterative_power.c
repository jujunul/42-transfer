/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 14:19:58 by juthierr          #+#    #+#             */
/*   Updated: 2016/09/03 19:07:45 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int stock;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	stock = nb;
	while (power > 1)
	{
		stock = stock * nb;
		power--;
	}
	return (stock);
}
