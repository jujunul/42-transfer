/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 15:26:14 by juthierr          #+#    #+#             */
/*   Updated: 2016/09/09 16:42:01 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while ((s1[i] == s2[i]) || ((s1[i] + 32) == s2[i]) && s2[i] || s2[i] == 32)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		if (ft_strcmp("president", argv[i]) == 0)
		{
			write(1, "Alert!!!\n", 9);
			return (0);
		}
		if (ft_strcmp("attack", argv[i]) == 0)
		{
			write(1, "Alert!!!\n", 9);
			return (0);
		}
		if (ft_strcmp("Powers", argv[i]) == 0)
		{
			write(1, "Alert!!!\n", 9);
			return (0);
		}
		i++;
	}
	return (0);
}
