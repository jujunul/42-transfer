#include "ft_lib.h"

char			*ft_docolle(char *tab, char *colle, int x, int y)
{
	int		i;
	int		j;
	int		k;

	k = 0;
	j = 0;
	while (j < y)
		{
			i = 1;
			while (i < x)
			{
				if (i == 0 && j == 0)
					colle[k++] = tab[0];
				else if (i == 0 && j == (y - 1))
					colle[k++] = tab[2];
				else if (i == 0 && j != 0)
					colle[k++] = tab[5];
				else if (j == 0 && i != 0 && i != x)
					colle[k++] = tab[4];
				else if (j == y - 1 && i != 0 && i != x)
					colle[k++] = tab[4];
				else
					colle[k++] = ' ';
				i++;
			}
			if (i == x && j == 0)
				colle[k++] = tab[1];
			else if (i == x && j == (y - 1))
				colle[k++] = tab[3];
			else if (i == x && j != (y - 1))
				colle[k++] = tab[5];
			colle[k++] = '\n';
			j++;
		}
		colle[k] = '\0';
		return (colle);
}

char			*first_colle(int x, int y)
{
	char	*tab;
	char	*colle;

	if(!(colle = (char *)malloc(sizeof(char) * ((x * (y + 1)) + 1))))
		return (0);
	if (!(tab = (char *)malloc(sizeof(char) * 7)))
		return (0);
	tab = "oooo-|\0";
	colle = ft_docolle(tab, colle, x, y);
	return (colle);
}

char			*second_colle(int x, int y)
{
char	*tab;
	char	*colle;

	if(!(colle = (char *)malloc(sizeof(char) * ((x * (y + 1)) + 1))))
		return (0);
	if (!(tab = (char *)malloc(sizeof(char) * 7)))
		return (0);
	tab = "/\\/**\0";
	colle = ft_docolle(tab, colle, x, y);
	return (colle);
}

char			*third_colle(int x, int y)
{
	char	*tab;
	char	*colle;

	if(!(colle = (char *)malloc(sizeof(char) * ((x * (y + 1)) + 1))))
		return (0);
	if (!(tab = (char *)malloc(sizeof(char) * 7)))
		return (0);
	tab = "AACCBB\0";
	colle = ft_docolle(tab, colle, x, y);
	return (colle);
}

char			*four_colle(int x, int y)
{
	char	*tab;
	char	*colle;

	if(!(colle = (char *)malloc(sizeof(char) * ((x * (y + 1)) + 1))))
		return (0);
	if (!(tab = (char *)malloc(sizeof(char) * 7)))
		return (0);
	tab = "ACACBB\0";
	colle = ft_docolle(tab, colle, x, y);
	return (colle);
}