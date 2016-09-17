/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 22:02:29 by juthierr          #+#    #+#             */
/*   Updated: 2016/09/13 22:12:02 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	while (*begin_list1->next != NULL)
		*begin_list1 = begin_list1->next;
	begin_list1->next = begin_list2;
}
