/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 18:05:46 by juthierr          #+#    #+#             */
/*   Updated: 2016/09/07 18:48:02 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

char		*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] && dest[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

char		*ft_strdup(char *src)
{
	int		i;
	char	*cp;

	i = 0;
	while (src[i])
		i++;
	if (!(cp = (char*)malloc(sizeof(char) * i + 1)))
		return (NULL);
	ft_strcpy(cp, src);
	return (cp);
}
