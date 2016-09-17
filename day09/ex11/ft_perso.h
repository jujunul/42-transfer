/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 16:28:31 by juthierr          #+#    #+#             */
/*   Updated: 2016/09/09 16:33:37 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H

# define SAVE_AUSTIN_POWERS (1)

typedef struct		s_perso
{
	char	*name;
	int		life;
	int		age;
	int		profession;
}					t_perso;

#endif
