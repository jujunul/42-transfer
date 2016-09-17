/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 21:25:27 by juthierr          #+#    #+#             */
/*   Updated: 2016/09/13 21:56:26 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list	*test;

	test = begin_list;
	while (test->next != NULL)
	{
		if (((*cmp)(test->data, data_ref)))
			return (test);
		test = test->next;
	}
	return (begin_list);
}
