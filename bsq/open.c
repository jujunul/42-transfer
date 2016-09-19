/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 12:15:12 by juthierr          #+#    #+#             */
/*   Updated: 2016/09/19 12:30:12 by juthierr         ###   ########.fr       */
/*   Updated: 2016/09/16 15:26:57 by juthierr         ###   ########.fr       */
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
		return (NULL);
	if (old != NULL)
	{
		ft_memcpy(nex, old, oldsize);
		free(old);
	}
	return (nex);
}

int			ft_parsingpara(char *str)
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
	t_infomap->line = para;
	return (i);
}

int			main(int ac ,char **av)
{
	int		fd;
	int		ret;
	int		i;
	char		*str;
	int k;
	char *para;

	k = 0;
	fd = 0;
	ret = 0;
	i = 1;
	if (!(str = (char*)malloc(sizeof(char) * BUFF)))
		return (0);
	if (ac > 1)
	{
		while (i < ac)
		{
			if ((fd = open(av[i], O_RDONLY)) < 0)
				ft_printerror(av, i, errno);
			while((ret = read(fd, str, k * BUFF))  > 0)
			{
				if(!(str = ft_realloc(str, k * BUFF, (k + 1) * BUFF)))
					return (0);
				k++;
				str = str + ft_parsingpara(str);
			}
			i++;
		}
	}
}
