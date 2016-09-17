/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 13:01:15 by juthierr          #+#    #+#             */
/*   Updated: 2016/09/09 15:01:08 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char			*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] <= 'J') && (str[i] >= 'A'))
			str[i] = str[i] + 16;
		else if (str[i] > 'J' && str[i] <= 'Z')
			str[i] = str[i] - 10;
		if ((str[i] > 'j') && str[i] <= 122)
			str[i] = str[i] - 10;
		else if (str[i] <= 'j' && str[i] >= 'a')
			str[i] = str[i] + 16;
		i++;
	}
	return (str);
}
