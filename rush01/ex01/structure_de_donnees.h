/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structure_de_donnees.h                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trichert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 14:36:49 by trichert          #+#    #+#             */
/*   Updated: 2016/09/11 23:28:15 by trichert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTURE_DE_DONNEES_H
# define STRUCTURE_DE_DONNEES_H
# include <stdlib.h>

typedef struct s_coord		t_pos;
typedef struct s_chiffre	t_chiffre;
typedef struct s_block		t_block;
typedef struct s_grille		t_grille;
typedef struct s_vect_chfr	t_vect_chfr;
typedef struct s_dict		t_dict;
typedef struct s_ldict		t_ldict;

struct s_dict
{
	char key;
	int val;
};

struct s_ldict
{
	t_dict dict[8];
};

struct		s_coord
{
	int		c;
	int		l;
};

struct		s_chiffre
{
	t_pos	position;
	t_pos	list_pos_possible[9];
	int		is_valide;
	char	c;
};

struct		s_block
{
	t_chiffre	chiffres[8];
	int			occurrences[8];
};

struct		s_grille
{
	t_block		block[8];
};

void		init_position(t_pos *pos);
void		modify_position(t_pos *position_to_modify, int new_c, int new_l);
void		init_ensemble_possible(t_chiffre *chfr);
void		init_chiffre(t_chiffre *chfr, char c);
int			get_occurence(t_block *block);
char		get_chiffre(t_chiffre *chfr);
int			get_is_valide(t_chiffre *chfr);
void		write_occurence(t_chiffre *chfr, int occ);
void		write_is_valide(t_chiffre *chfr);
int			get_nbr_possible(t_chiffre *chfr);
void		modify_pos_possible(t_chiffre *chfr, int pbt, int new_c, int new_l);
t_pos		get_possible_pos(t_chiffre *chfr, int pbt);
char		***parse_block(char **tabgrill);
char		*vectorize_chfr(t_grille gr); // to do
int			get_tot_occurence(t_grille gr, char c); // to do
char		*vectorize_block(char **ta)

#endif
