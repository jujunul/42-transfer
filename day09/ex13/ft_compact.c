/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 16:51:14 by juthierr          #+#    #+#             */
/*   Updated: 2016/09/09 16:51:29 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_compact(char **tab, int length)
{
	int i;
	int j;

	i = 0;
	while (i < length)
	{
		if (tab[i] == NULL)
		{
			j = i;
			while (j < --length)
			{
				tab[j] = tab[j + 1];
				j++;
			}
		}
		i++;
	}
	return (length);
}
