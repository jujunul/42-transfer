/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   infomap.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeldame <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 12:37:45 by bbeldame          #+#    #+#             */
/*   Updated: 2016/09/19 12:43:30 by bbeldame         ###   ########.fr       */
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

#endif
