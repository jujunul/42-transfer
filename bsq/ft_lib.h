/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeldame <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 18:27:31 by bbeldame          #+#    #+#             */
/*   Updated: 2016/09/21 21:15:45 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIB_H
# define FT_LIB_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <fcntl.h>

extern	int			g_cani;

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

void				ft_puterr(char *str, int i);
t_infomap			*start_params(char *para);
void				solve_bsq(int *bsq, int columns, t_infomap *im);
void				ft_printerror(void);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_realloc(void *old, int oldsize, int newsize);
int					ft_strlen(char *str);
void				ft_printerror(void);
char				*ft_parsingpara(char *str);

#endif
