/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 12:15:12 by juthierr          #+#    #+#             */
/*   Updated: 2016/09/16 15:26:57 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int			main(int ac ,char **av)
{
	int fd;
	int ret;
	int i;
	int size;
	char *final;

	fd = 0;
	ret = 0;
	i = 1;
	while (i < ac)
	{
		if ((fd = open(av[i], O_RDONLY)) < 0)
			ft_printerror(av, i, errno);
		while((ret = read(fd, buffer, 1024))  > 0)
		{
			
		}
	}
}
