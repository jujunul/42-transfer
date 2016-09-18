#include "ft_lib.h"

char			*last_colle(int x, int y)
{
	char	*tab;
	char	*colle;

	if(!(colle = (char *)malloc(sizeof(char) * ((x * (y + 1)) + 1))))
		return (0);
	if (!(tab = (char *)malloc(sizeof(char) * 7)))
		return (0);
	tab = "ACCABB\0";
	colle = ft_docolle(tab, colle, x, y);
	return (colle);
}