/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 17:20:39 by juthierr          #+#    #+#             */
/*   Updated: 2016/09/15 23:35:59 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <errno.h>
#include "ft_all.h"

int			ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void		ft_puterr(char *str)
{
	write(2, str, ft_strlen(str));
}

char		*ft_strerrno(int caca)
{
	if (caca == ENOENT)
		return ("No such file or directory\n");
	if (caca == EPERM)
		return ("Operation not permitted\n");
	if (caca == EACCES)
		return ("Permission denied\n");
	if (caca == EISDIR)
		return ("Is a directory\n");
	if (caca == EILSEQ)
		return ("Illegal byte sequence\n");
	return ("erreur inconnue\n");
}

void		ft_printerror(char **av, int i, int erreur)
{
	ft_puterr(av[0]);
	ft_puterr(": ");
	ft_puterr(av[i]);
	ft_puterr(": ");
	ft_puterr(ft_strerrno(erreur));
}

int			main(int ac, char **av)
{
	char	buffer[8192];
	int		fd;
	int		ret;
	int		i;

	i = 0;
	ret = 0;
	fd = 0;
	if (ac == 1)
	{
		while ((ret = read(fd, buffer, sizeof(buffer))) > 0)
			write(1, buffer, ret);
		return (0);
	}
	aff(i, ac, av, buffer);
	return (0);
}
