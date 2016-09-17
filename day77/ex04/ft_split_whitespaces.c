/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 19:51:16 by juthierr          #+#    #+#             */
/*   Updated: 2016/09/08 13:46:53 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

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

char		**simplification(char *str, char **tab, int i)
{
	int j;
	int k;
	int l;

	k = 0;
	l = 0;
	while (str[i])
	{
		j = i;
		while (str[j] != ' ' && str[j] != '\n' && str[i] != '\t')
			j++;
		if (j > i)
			if (!(tab[k] = (char *)malloc(sizeof(char) * (j - i + 1))))
				return (0);
		while (j > i)
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
	char **tab;

	tab = (char **)malloc(sizeof(char *) * ft_nbstr(str));
	return (simplification(str, tab, 0));
}

int			main(void)
{
	char **test = ft_split_whitespaces("test jespere ca marche");
	int i;
	int j;

	write(1, "toto\n", 1);
	i = -1;
	j = 0;
	while (i < 4)
	{
		printf("%d ", -1);
		printf("%s",test[++i]);
		printf("%d", i);
	}
	return (0);
}
