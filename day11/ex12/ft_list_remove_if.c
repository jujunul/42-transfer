/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 21:38:12 by juthierr          #+#    #+#             */
/*   Updated: 2016/09/13 22:00:12 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *test;
	t_list *tmp;

	test = *begin_list;
	while (test->next != NULL)
	{
		tmp = test->next;
		if (((*cmp)(test->data, data_ref)) == 0)
			free(test);
		test = tmp;
	}
}
