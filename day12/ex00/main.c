/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 13:59:10 by juthierr          #+#    #+#             */
/*   Updated: 2016/09/14 17:19:42 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/uio.h>

int		main(int argc, char **argv)
{
	char	buffer[65536];
	int		fd;
	int		ret;

	ret = 0;
	fd = 0;
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (0);
	}
	if (argc < 2)
	{
		write(2, "File name missing.\n", 19);
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
		return (0);
	while ((ret = read(fd, buffer, sizeof(buffer))) > 0)
		write(1, buffer, ret);
	return (0);
}
