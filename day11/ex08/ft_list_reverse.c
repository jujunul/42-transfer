/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 19:16:38 by juthierr          #+#    #+#             */
/*   Updated: 2016/09/13 21:15:13 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_reverse(t_list **begin_list)
{
	t_list	*tmp;
	t_list	*retur;

	retur = NULL;
	while (*begin_list)
	{
		tmp = *begin_list->next;
		*begin_list->next = retur;
		retur = *begin_list;
		*begin_list = tmp;
	}
	*begin_list = retur;
}
