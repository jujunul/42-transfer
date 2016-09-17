/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 18:54:49 by juthierr          #+#    #+#             */
/*   Updated: 2016/09/08 11:57:55 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <ctype.h>

int			ft_recuplen(int argc, char **argv)
{
	int		i;
	int		j;

	i = 0;
	j = 1;
	while (j < argc)
	{
		while (argv[j][i])
			i++;
		j++;
	}
	return (i);
}

char		*ft_concat_params(int argc, char **argv)
{
	int		len;
	char	*str;
	int		i;
	int		j;
	int		d;

	d = 0;
	len = argc - 1 + ft_recuplen(argc, argv);
	if (!(str = (char*)malloc((sizeof(char) * len))))
		return (NULL);
	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i])
		{
			str[d] = argv[j][i];
			i++;
			d++;
		}
		str[d++] = '\n';
		j++;
	}
	str[--d] = '\0';
	return (str);
}
