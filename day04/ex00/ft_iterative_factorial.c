/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 12:47:29 by juthierr          #+#    #+#             */
/*   Updated: 2016/09/03 11:42:54 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int compteur;

	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	compteur = nb;
	while (compteur > 1)
	{
		nb = nb * (--compteur);
	}
	return (nb);
}
