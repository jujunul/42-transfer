/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 23:31:24 by juthierr          #+#    #+#             */
/*   Updated: 2016/09/15 23:42:22 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <errno.h>
#include "ft_all.h"

void		aff(int i, int ac, char **av, char *buffer)
{
	int fd;
	int ret;

	fd = 0;
	ret = 0;
	while (++i < ac)
	{
		if ((fd = open(av[i], O_RDONLY)) < 0)
			ft_printerror(av, i, errno);
		while ((ret = read(fd, buffer, sizeof(buffer))) > 0)
		{
			if (ret < 0)
				ft_printerror(av, i, errno);
			write(1, buffer, ret);
		}
		close(fd);
	}
}
