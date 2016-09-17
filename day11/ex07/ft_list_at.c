/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 19:05:08 by juthierr          #+#    #+#             */
/*   Updated: 2016/09/13 21:57:24 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	count;
	t_list			*tmp;

	count = 1;
	tmp = begin_list;
	if (nbr == count)
		return (tmp);
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		count++;
		if (nbr == count)
			return (tmp);
	}
	return (NULL);
}
