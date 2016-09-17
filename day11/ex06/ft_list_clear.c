/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 18:25:59 by juthierr          #+#    #+#             */
/*   Updated: 2016/09/13 21:16:33 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_clear(t_list **begin_list)
{
	t_list *tmp;
	t_list *stock;

	tmp = *begin_list;
	while (tmp->next != NULL)
	{
		stock = tmp->next;
		free(tmp);
		tmp = stock->next;
	}
	*begin_list = NULL;
}
