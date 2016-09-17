/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 21:31:58 by juthierr          #+#    #+#             */
/*   Updated: 2016/09/06 14:51:33 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && src[i] && dest[i])
	{
		dest[i] = src[i];
		i++;
	}
	if (!src[i] && i < n)
		while (dest[i])
			dest[i++] = '\0';
	return (dest);
}
