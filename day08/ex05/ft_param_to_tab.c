/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 23:13:19 by juthierr          #+#    #+#             */
/*   Updated: 2016/09/08 23:39:57 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <ctype.h>

char					**ft_split_whitespaces(char *str);

int						ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char					*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] && dest[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char					*ft_strdup(char *src)
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

struct s_stock_par		*ft_param_to_tab(int argc, char **argv)
{
	t_stock_par		*tab;
	int				i;

	i = 0;
	tab = malloc((ac + 1) * sizeof(t_stock_par));
	while (i < argc)
	{
		tab[i].size_param = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup;
		tab[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
