/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 11:43:55 by juthierr          #+#    #+#             */
/*   Updated: 2016/09/08 11:45:21 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_concat_string(char **argv, char *str)
{
	int		size;
	int		i;
	int		j;

	j = 0;
	i = 1;
	size = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			str[size] = argv[i][j];
			j++;
			size++;
		}
		str[size++] = '\n';
		i++;
	}
	str[--size] = '\0';
	return (str);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		size;
	int		i;
	int		j;

	i = 1;
	size = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			j++;
		}
		size = size + j;
		i++;
	}
	str = (char*)malloc(sizeof(char) * size + argc - 1);
	str = ft_concat_string(argv, str);
	return (str);
}

int		main(int argc, char **argv)
{
	printf("%s", ft_concat_params(argc, argv));
	return (0);
}
