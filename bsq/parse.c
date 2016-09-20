/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 15:39:16 by juthierr          #+#    #+#             */
/*   Updated: 2016/09/20 22:39:51 by bbeldame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
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

void *ft_realloc(void *old, int oldsize, int newsize)
{
	void *nex;

	nex = (void *)malloc(newsize);
	if (nex == NULL)
	{
		return NULL;
	}
	if (old != NULL)
	{
		ft_memcpy(nex, old, oldsize);
		free(old);
	}

	return nex;
}

int			ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void		ft_puterr(char *str, int i)
{
	write(i, str, ft_strlen(str));
}

void		ft_printerror(void)
{
	ft_puterr("map error\n", 2);
}

char		*ft_parsingpara(char *str)
{
	int		i;
	char	*para;
	int		j;

	i = 0;
	while (str[i] != '\n')
		i++;
	if(!(para = (char *)malloc(sizeof(char) * i)))
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

int				*ft_parsingtab(char *str, t_infomap *im, int columns)
{
	int i;
	int *tab;
	int len;
	int j;

	len = (columns + 1) * (im->nblines + 1);
	i = 0;
	j = 0;
	if (!(tab = (int *)malloc(sizeof(int) * len)))
		return (0);
	while (i < columns + 2)
		tab[i++] = 0;
	while (i <= len)
	{
		if (str[j] == im->empty)
			tab[i] = -1;
		if (str[j] == im->obs)
			tab[i] = 0;
		if (str[j] == '\n' && str[j + 1])
		{
			tab[i] = -2;
			i++;
			tab[i] = 0;
		}
		if (str[j + 1] == '\0')
			len = -1;
		j++;
		i++;
	}
	tab[i - 1] = -3;
	return (tab);
}

int			ft_columns(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\n')
		i++;
	return (++i);
}

int			main(int ac, char **av)
{
	int			fd;
	int			ret;
	char		*str;
	int			i;
	int			k;
	int			*tab;
	t_infomap	*im;
	int			columns;

	i = 1;
	fd = 0;
	ret = 1;
	if(!(str = (char*)malloc(sizeof(char) * BUFF)))
		return (0);
	if (ac > 1)
	{
		while (i < ac)
		{
			k = 1;
			if ((fd = open(av[i], O_RDONLY)) < 0)
				ft_printerror();
			while((ret = read(fd, str, k * BUFF)) > 0)
			{
				if(!(str = ft_realloc(str, k * BUFF, (k + 1) * BUFF)))
					return (0);
				k++;
				im = start_params(ft_parsingpara(str));
				str = str + ft_strlen(ft_parsingpara(str)) + 1;
				columns = ft_columns(str);
				tab = ft_parsingtab(str, im, columns);
				solve_bsq(tab, columns, im);
			}
			i++;
		}
	}
}
