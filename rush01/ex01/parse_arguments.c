/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_arguments.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trichert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 19:31:51 by trichert          #+#    #+#             */
/*   Updated: 2016/09/11 23:17:22 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse_arguments.h"
#include "string.h"
#include <ctype.h>

char	**ft_start_parsing(char **argv)
{
	char	**tabgrill;
	int		i;
	int		j;

	i = 0;
	j = 1;
	if (!(tabgrill = (char **)malloc(sizeof(char*) * 10)))
		return (NULL);
	while (i < 10)
	{
		if (!(tabgrill[i] = (char *)malloc(sizeof(char) * 10)))
			return (NULL);
		i++;
	}
	i = 0;
	while (j < 10)
		ft_strcpy(tabgrill[i++], argv[j++]);
	tabgrill[9] = NULL;
	return (tabgrill);
}

int		ft_validite(int argc, char **argv)
{
	int i;
	int testlen;

	i = 1;
	if (argc != 10)
	{
		print_erreur();
		return (0);
	}
	while (i < 10)
	{
		testlen = ft_strlentest(argv[i]);
		if (testlen != 9)
		{
			print_erreur();
			return (0);
		}
		i++;
	}
	return (1);
}

char	***malloc_block(char ***tablock)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	if (!(tablock = (char***)malloc(sizeof(char **) * 10)))
		return (NULL);
	tablock[9] = 0;
	while (k < 10)
	{
		tablock[k] = (char **)malloc(sizeof(char *) * 3);
		k++;
	}
	while (i < 10)
	{
		j = 0;
		while (j < 3)
		{
			tablock[i][j] = (char *)malloc(sizeof(char) * 3);
			j++;
		}
		i++;
	}
	return (tablock);
}

char	***parse_block(char **tabgrill)
{
	char		***tablock;
	int			i;
	int			j;
	int			k;
	int			l;

	k = 0;
	i = 0;
	tablock = malloc_block(tablock);
	while (i < 9)
	{
		j = 0;
		l = -1;
		if ((i == 3 || i == 6) && i != k)
			k = k + 3;
		while (j < 9)
		{
			if ((j % 3) == 0)
				l++;
			tablock[k + (l % 3)][i % 3][j % 3] = tabgrill[i][j];
			j++;
		}
		i++;
	}
	return (tablock);
}
