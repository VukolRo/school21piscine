#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(int s1, int s2)
{
	if (s1 < s2)
		return (-1);
	if (s1 > s2)
		return (1);
	return (0);
}

int ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int i;
	int order;
	int revers;


	i = 0;
	order = 0;
	revers = 0;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) < 0)
		{
			if (revers > 0)
				return(0);		
			order++;
		}
		if ((*f)(tab[i], tab[i + 1]) > 0)
		{
			if (order > 0)
				return (0);
			revers++;
		}
		i++;
	}
	return (1);
}

int main (void)
{
	int tab[3];

	tab[0] = 900;
	tab[1] = 900;
	tab[2] = 900;
	printf("%d\n", ft_is_sort(tab, 3, &ft_strcmp));
	return (0);
}
