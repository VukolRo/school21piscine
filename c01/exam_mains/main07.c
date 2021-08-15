#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	m;

	m = 0;
	i = size;
	while (i != 0 )
	{
		*tab[m] = *tab[i];
		i--;
		m++;
	}
}

int main()
{
	int	c[3];
	int *tab;
	
	c = [1, 2, 3];
	tab = c;
	ft_rev_int_tab(&tab, 3);
	printf("%d", c);
	return(0);
}
