/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeldame <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 22:05:09 by bbeldame          #+#    #+#             */
/*   Updated: 2016/09/21 22:46:15 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

void		*ft_memcpy(void *dest, const void *src, size_t n)
{
	int			i;
	char		*des;
	const char	*sr;

	i = 0;
	des = dest;
	sr = src;
	while (i < (int)n)
	{
		des[i] = sr[i];
		i++;
	}
	return (dest);
}

void		*ft_realloc(void *old, int oldsize, int newsize)
{
	void *nex;

	nex = (void *)malloc(newsize);
	if (nex == NULL)
	{
		return (NULL);
	}
	if (old != NULL)
	{
		ft_memcpy(nex, old, oldsize);
		free(old);
	}
	return (nex);
}

int			ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void		ft_printerror(void)
{
	if (g_cani == 1)
	{
		write(2, "map error\n", 10);
		g_cani = 0;
	}
}

char		*ft_parsingpara(char *str)
{
	int		i;
	char	*para;
	int		j;

	i = 0;
	while (str[i] != '\n' && str[i])
		i++;
	if (!(para = (char *)malloc(sizeof(char) * i)))
		return (0);
	j = 0;
	while (j < i)
	{
		para[j] = str[j];
		j++;
	}
	para[j] = '\0';
	return (para);
}
