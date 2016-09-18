#include "ft_lib.h"

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int             ft_strcmp(char *s1, char *s2)
{
        int i;

        i = 0;
        while (s1[i] == s2[i] && s1[i])
                i++;
        return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void            ft_putnbr(int nb)
{
        unsigned int n;

        if (nb < 0)
        {
                ft_putchar('-');
                n = -nb;
        }
        else
                n = nb;
        if (n >= 10)
                ft_putnbr(n / 10);
        ft_putchar((n % 10) + '0');
}

void			ft_aff(int x, int y, int colle, int aff)
{
	if (aff == 1)
		write(1, " || ", 4);
	write(1, "[colle-", 7);
	ft_putnbr(colle);
	write(1, "] [", 3);
	ft_putnbr(x);
	write(1, "] [", 3);
	ft_putnbr(y);
	write(1, "]\n", 2);
	aff = 1;
	return (aff);
}

int			ft_check(int x, int y, char *str)
{
	int aff;
	
	aff = 0;
	if (ft_strcmp(str, first_colle(x, y)) == 0)
		aff = ft_aff(x, y, 00, aff);
	if (ft_strcmp(str, second_colle(x, y) == 0))
		aff = ft_aff(x, y, 01, aff);
	if (ft_strcmp(str, third_colle(x, y) == 0))
		aff = ft_aff(x, y, 02, aff);
	if (ft_strcmp(str, four_colle(x, y) == 0))
		aff = ft_aff(x, y, 03, aff);
	if(ft_strcmp(str, last_colle(x, y) == 0))
		aff = ft_aff(x, y, 04, aff);
	return (aff);
}