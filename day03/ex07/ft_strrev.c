/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 15:05:48 by juthierr          #+#    #+#             */
/*   Updated: 2016/09/01 20:39:35 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strrev(char *str)
{
	int		d;
	int		f;
	char	swap;

	f = 0;
	while (str[f])
		f++;
	d = 0;
	f = f - 1;
	while (f > d)
	{
		swap = str[f];
		str[f] = str[d];
		str[d] = swap;
		d++;
		f--;
	}
	return (str);
}
