/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 13:59:10 by juthierr          #+#    #+#             */
/*   Updated: 2016/09/14 16:49:28 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/uio.h>

int		main(int argc, char **argv)
{
	char buffer[65536];
	int fd = 0;
	int ret = 0;

	if ( argc > 1 ) {
		fd = open( argv[1], O_RDONLY ); // O_WRONLY, O_RDWR
		if (fd < 0)
			return 0;
	}

	while ( (ret = read( fd, buffer, sizeof(buffer) )) > 0 ) {
		write(1, buffer, ret);
	}

	if (fd > 0)
	{
		close(fd);
	}
	return (0);
}


int size = 0;
char* final = NULL;
while ( (ret = read( fd, buffer, 1024 )) > 0 ) {
	size = ft_strlen(final);
	final = ft_realloc(final, size, size + ret + 1);
	if (final == NULL)
	{
		return 0;
	}
	final[size + ret] = '\0';
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

