/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 19:45:01 by juthierr          #+#    #+#             */
/*   Updated: 2016/09/03 19:57:01 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;
	int prime;

	i = 1;
	prime = 10;
	if ((nb == 0) || (nb == 1) || (nb < 0))
		return (0);
	while (i++ < nb)
	{
		if (nb % i < prime)
			prime = nb % i;
	}
	if (prime == 0)
		return (0);
	return (1);
}
