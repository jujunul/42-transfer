/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structure_de_donnees.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trichert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 15:07:05 by trichert          #+#    #+#             */
/*   Updated: 2016/09/11 23:25:48 by trichert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structure_de_donnees.h"

void	init_position(t_pos *pos)
{
	pos->c = -1;
	pos->l = -1;
}

void	modify_position(t_pos *position_to_modify, int new_c, int new_l)
{
	position_to_modify->c = new_c;
	position_to_modify->l = new_l;
}

void	init_ensemble_possible(t_chiffre *chfr)
{
	int i;

	i = 0;
	while (i < 9)
	{
		init_position(&chfr->list_pos_possible[i]);
		i++;
	}
}

void	modify_pos_possible(t_chiffre *chfr, int pbt, int new_c, int new_l)
{
	chfr->list_pos_possible[pbt].c = new_c;
	chfr->list_pos_possible[pbt].l = new_l;
}

int		get_occurence(t_block *block, int chfr)
{
	return (block->occurence[chfr]);
}

char	get_chiffre(t_chiffre *chfr)
{
	return (chfr->c);
}

int		get_is_valide(t_chiffre *chfr)
{
	return (chfr->is_valide);
}

void	write_occurence(t_block *block, int chfr, int occ)
{
	chfr->occurence[chfr] = occ;
}

void	write_is_valide(t_chiffre *chfr)
{
	chfr->is_valide = 1;
}

int		get_nbr_possible(t_block *block, int chfr)
{
	int i;
	int n;

	n = 0;
	i = 0;
	while (i < 9)
	{
		if (block->chiffre[chfr].list_pos_possible[i].c != -1)
			n++;
		i++;
	}
	return (n);
}

t_pos	get_possible_pos(t_block block, int chfr, int pbt)
{
	return (block->chiffre[chfr].list_pos_possible[pbt]);
}



char	***parse_block(char **tabgrill)
{
	char	***tablock;
	int		i;
	int		j;
	int		k;

	i = 0;
	tablock = malloc_block(tablock);
	while (i < 10)
	{
		while (j < 10)
		{
			tablock[k][i % 3][j % 3] = tabgrill[i][j];
			j++;
		}
		i++;
		k++;
	}
	return (tablock);
}

char	*vectorize_chfr(char **tabgrill)
{
	char *vect;
	vect = NULL;

	return (vect)
}

int		get_tot_occurence(t_grille gr, char c)
{
	int block;
	int res;

	res = 0;
	block = 0;
	while (block < 8)
	{
		res += gr->block[block].occurence;
	}
	return (res);
}

void	init_chiffre(t_chiffre *chfr, char chf)
{
	chfr->is_valide = 0;
	chfr->c = chf;
	init_position(&chfr->position);
	init_ensemble_possible(chfr);
}

void init_blocks(t_block *block)
{
	int chfr;

	chfr = 0;
	while (chfr < 9)
	{
		init_chiffre(chfr->chiffre[chfr], '0');
		block->occurences[chfr] = 0;
		chfr++;
	}
}

void init_grille(t_grille *gr)
{
	int block;

	block = 0;
	while (block < 9)
	{
		init_block(gr->block[block]);
		block++;
	}
}
