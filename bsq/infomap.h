/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   infomap.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeldame <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 12:37:45 by bbeldame          #+#    #+#             */
/*   Updated: 2016/09/20 13:45:18 by bbeldame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INFOMAP_H
# define INFOMAP_H

typedef struct		s_infomap
{
	char			*line;
	char			empty;
	char			obs;
	char			full;
	int				nblines;
}					t_infomap;

typedef struct		s_bg
{
	int				i;
	int				size;
}					t_bg;
#endif
