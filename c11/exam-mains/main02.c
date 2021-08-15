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

int ft_any(char **tab, int(*f)(char*))
{
	int	i;
	
	i = 0;
	while (tab[i] != NULL)
	{
		if ((*f)(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
}

int main (void)
{
	char *tab[4];

	tab[0] = "";
	tab[1] = "";
	tab[2] = "e";
	tab[3] = NULL;
	printf ("%d\n", ft_any(tab, &ft_strlen));
	
	return (0);
}
