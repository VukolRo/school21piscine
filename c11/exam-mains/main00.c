#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
	printf("%d\n", nb);
}

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}

int main (void)
{
	int tab[3];

	tab[0] = 123;
	tab[1] = 456;
	tab[2] = 789;
	ft_foreach(tab, 3, &ft_putnbr);
	return (0);
}
