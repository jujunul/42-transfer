/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 19:51:16 by juthierr          #+#    #+#             */
/*   Updated: 2016/09/10 18:38:58 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <ctype.h>

int			ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int			ft_nbstr(char *str)
{
	int i;
	int nbstr;

	i = 0;
	nbstr = 1;
	while (str[i])
	{
		if ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t') &&
				(str[i + 1] != 32 || str[i + 1] != '\n' || str[i + 1] != '\t'))
			nbstr++;
		i++;
	}
	return (nbstr);
}

char		**simplification(char *str, char **tab, int i, int len)
{
	int j;
	int nb[3];

	nb[0] = 0;
	nb[1] = 0;
	while (i < len - 1)
	{
		j = i;
		while (str[j] != ' ' && str[j] != '\n' && str[j] != '\t' && str[j])
			j++;
		if (j > i)
			tab[nb[0]] = (char *)malloc(sizeof(char) * (j - i + 1));
		while (j > i && str[i])
			tab[nb[0]][nb[1]++] = str[i++];
		if (nb[1] > 0)
		{
			tab[nb[0]][nb[1]] = '\0';
			nb[0]++;
			nb[1] = 0;
		}
		i++;
	}
	tab[nb[0] + 1] = 0;
	return (tab);
}

char		**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		len;

	if (!(tab = (char **)malloc(sizeof(char *) * (ft_nbstr(str) + 1))))
		return (NULL);
	len = ft_strlen(str);
	tab = simplification(str, tab, 0, len);
	return (tab);
}
