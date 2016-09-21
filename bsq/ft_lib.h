/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 12:15:32 by juthierr          #+#    #+#             */
/*   Updated: 2016/09/21 17:53:07 by bbeldame         ###   ########.fr       */
/*   Updated: 2016/09/16 13:09:06 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIB_H
# define FT_LIB_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <fcntl.h>

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

# define BUFF (819200)

void		ft_puterr(char *str, int i);
t_infomap	*start_params(char *para);
void		solve_bsq(int *bsq, int columns, t_infomap *im);
void		ft_printerror(void);

#endif
