#include "ft_lib.h"
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int			i;
	char		*des;
	const char	*sr;
	i = 0;
	des = dest;
	sr = src;
	while (i < (int)n)
	{
		des[i] = sr[i];
		i++;
	}
	return (dest);
}
void *ft_realloc(void *old, int oldsize, int newsize)
{
	void *nex;

	nex = (void *)malloc(newsize);
	if (nex == NULL)
	{
		return NULL;
	}
	if (old != NULL)
	{
		ft_memcpy(nex, old, oldsize);
		free(old);
	}
	return nex;
}

int		check_line(char *str)
{
	int i;
	int line;

	line = 0;
	i = 0;
	while(str[i])
	{
		if(str[i] == '\n')
			line++;
			i++;
	}
	return (line);
}

int		check_colon(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\n')
		i++;
	return (i);
}

int main(void)
{
	char	*str;
	int		ret;
	int		i;
	int x;
	int y;
	
	i = 1;
	if (!(str = (char*)malloc(sizeof(char) * BUFF)))
		return (0);
	while ((ret = read(0, str, i * BUFF) == (BUFF * i)))
	{
		if (!(str = ft_realloc(str, i * BUFF, (i + 1) * BUFF)))
			return (0);
		i++;
	}
	y = check_line(str);
	x = check_colon(str);
	if (ft_check(x, y, str) == 0)
		write(1, "grille non reconnue\n", 20);
	return (0);
}


