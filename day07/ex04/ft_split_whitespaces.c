/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 19:51:16 by juthierr          #+#    #+#             */
/*   Updated: 2016/09/08 15:16:19 by juthierr         ###   ########.fr       */
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
	int k;
	int l;

	k = 0;
	l = 0;
	while (i < len - 1)
	{
		j = i;
		while (str[j] != ' ' && str[j] != '\n' && str[j] != '\t' && str[j])
			j++;
		if (j > i)
			if (!(tab[k] = (char *)malloc(sizeof(char) * (j - i + 1))))
				return (NULL);
		while (j > i && str[i])
			tab[k][l++] = str[i++];
		if (l > 0)
		{
			tab[k][l] = '\0';
			k++;
			l = 0;
		}
		i++;
	}
	return (tab);
}

char		**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		len;

	if (!(tab = (char **)malloc(sizeof(char *) * ft_nbstr(str))))
		return (NULL);
	len = ft_strlen(str);
	tab = simplification(str, tab, 0, len);
	return (tab);
}
