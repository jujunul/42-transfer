/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 16:15:53 by juthierr          #+#    #+#             */
/*   Updated: 2016/09/13 17:53:32 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		count;
	t_list	*tmp;

	count = 0;
	tmp = begin_list;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		count++;
	}
	return (++count);
}
