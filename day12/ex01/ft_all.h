/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_all.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 23:36:09 by juthierr          #+#    #+#             */
/*   Updated: 2016/09/15 23:42:13 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ALL_H
# define FT_ALL_H

# include <fcntl.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <errno.h>

int		ft_strlen(char *str);
void	ft_puterr(char *str);
char	*ft_strerrno(int caca);
void	ft_printerror(char **av, int i, int erreur);
void	aff(int i, int ac, char **av, char *buffer);

#endif
