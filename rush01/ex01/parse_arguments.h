/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_arguments.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trichert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 19:29:15 by trichert          #+#    #+#             */
/*   Updated: 2016/09/11 23:14:16 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_ARGUMENTS_H
# define PARSE_ARGUMENTS_H

# include <ctype.h>
# include <stdlib.h>
# include "ft_string.h"

char	**ft_start_parsing(char **argv);
int		ft_validite(int argc, char **argv);
char	***parse_block(char ***tabgrill);
char	***malloc_block(char ***tablock);

#endif
