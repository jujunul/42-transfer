/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 22:17:20 by juthierr          #+#    #+#             */
/*   Updated: 2016/09/14 23:35:07 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*list;
	t_list	*plus;
	t_list	*tmp;

	list = *begin_list;
	plus = *begin_list;
	while (list->next != NULL)
	{
		plus = list->next;
		if (cmp(list, plus) < 0)
		{
			tmp = list->next;
			list->next = plus->next;
			plus->next = tmp;
		}
		list = list->next;
	}	
}
