#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' )
	{
		i++;
	}
	return (i);
}

int ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	i;
	int	count;
	
	i = 0;
	count = 0;
	while (i < length)
	{
		if ((*f)(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}

int main (void)
{
	char *tab[3];

	tab[0] = "";
	tab[1] = "";
	tab[2] = "";
	printf ("%d\n", ft_count_if(tab, 3, &ft_strlen));
	
	return (0);
}
