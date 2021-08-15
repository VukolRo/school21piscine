#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i < nb / 2)
	{
		if (i * i != nb)
			i++;
		else if (i * i == nb)
			return (i);
	}
	return (i);
}

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*rtrn;

	rtrn = (int *)malloc(length * sizeof(int));
	i = 0;
	while (i < length)
	{
		rtrn[i] = (*f)(tab[i]);
		i++;
	}
	printf("%d\n", rtrn[2]);
	return (rtrn);
}

int main (void)
{
	int tab[3];

	tab[0] = 4;
	tab[1] = 9;
	tab[2] = 16;
	ft_map(tab, 3, &ft_sqrt);
	
	return (0);
}

