/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudok.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyaramis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 13:57:39 by dyaramis          #+#    #+#             */
/*   Updated: 2016/09/10 15:58:04 by dyaramis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define MIN_VALUE '1'
#define MAX_VALUE '9'
#define SPACE ' '
#define NUM_VALUES (MAX_VALUE - MIN_VALUE + 1)
#define GRID_SIZE (NUM_VALUES*NUM_VALUES)
#define MAX_CELL (GRID_SIZE - 1)

typedef char value;
typedef int cell;
typedef petitrectangle values [size];

int solvable (ex);

int main (int argc, const char * argv[])
{










	Sudoku ex;
	Game ex;
	





	if (solvable(ex))
	{
		petitrectangle;
	}
	return (0);
}

int solvable (ex)
{
	int solved;
	cell celltarget;
	value = value_test
	
		if (isFull (game))
	{
		solved = true;
	}
}
else 
{
	candidatecell = trouve_case_vide (game);
	value_test = MIN_VALUE;
	solved = false;
	while (!solved && (trialvalue, <= MAX_VALUE))
	{

	if (islegal (game, candidateCell, value_test))
	{
		setCell (game, candidateCell, value_test);
		if (hasSolution (game))
			solved = true;
	}
	else
	{

}
	return solved

