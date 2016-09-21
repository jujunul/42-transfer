/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeldame <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 21:10:24 by bbeldame          #+#    #+#             */
/*   Updated: 2016/09/21 22:41:23 by bbeldame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

void		solve_the_fucking_shit(char *str)
{
	t_infomap	*im;
	int			*tab;
	int			columns;

	im = start_params(ft_parsingpara(str));
	str = str + (ft_strlen(ft_parsingpara(str)) + 1);
	columns = ft_columns(str, im);
	tab = ft_parsingtab(str, im, columns);
	solve_bsq(tab, columns, im);
}

void		fdone(int k)
{
	int		len;
	int		ret;
	char	buff[BUFF];
	int		j;
	char	*str;

	ret = 0;
	len = 0;
	str = 0;
	if (!(str = (char*)malloc(sizeof(char) * BUFF)))
		return ;
	while ((ret = read(0, buff, BUFF)) != 0)
	{
		j = 0;
		if (!(str = ft_realloc(str, k * BUFF, (k + 1) * BUFF)))
			return ;
		while (j < ret)
			str[len++] = buff[j++];
		k++;
	}
	str[len] = '\0';
	solve_the_fucking_shit(str);
}

void		fdelse(int fd, char **av, int i, int k)
{
	int		len;
	int		ret;
	char	buff[BUFF];
	int		j;
	char	*str;

	str = 0;
	len = 0;
	ret = 1;
	if (!(str = (char*)malloc(sizeof(char) * BUFF)))
		return ;
	if ((fd = open(av[i], O_RDONLY)) < 0)
		ft_printerror();
	while ((ret = read(fd, buff, BUFF)) != 0)
	{
		j = 0;
		if (!(str = ft_realloc(str, k * BUFF, (k + 1) * BUFF)))
			return ;
		while (j < ret)
			str[len++] = buff[j++];
		k++;
	}
	str[len] = '\0';
	solve_the_fucking_shit(str);
}

int			main(int ac, char **av)
{
	int			i;
	int			k;
	int			fd;

	fd = 0;
	i = 1;
	k = 1;
	g_cani = 1;
	if (ac > 1)
	{
		while (i < ac)
		{
			fdelse(fd, av, i, k);
			i++;
			if (i < ac)
				write(1, "\n", 1);
		}
	}
	else
		fdone(k);
}
