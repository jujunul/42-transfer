/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trichert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 19:49:37 by trichert          #+#    #+#             */
/*   Updated: 2016/09/11 19:50:15 by trichert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

void	print_erreur(void)
{
	write(1, "Erreur\n", 7);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[9] = '\0';
	return (dest);
}

int		ft_strlentest(char *str)
{
	int i;

	i = 0;
	while (str[i] && ((str[i] >= 49 && str[i] <= 57) || str[i] == '.'))
		i++;
	return (i);
}
