#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while(i < n) && (*src[i] != '\0')
	{
		*dest[i] = *src[i];
		i++;
	}
	dest[i] = '\0';
	while (i < n)
	{
		*dest[i] = '\0';
		i++;
	}
	return (dest);
}

int main()
{
	char	dest[5] = {'H', 'e', 'l', 'l', 'o'};
	char	src[6] = {'o', 'h', 'l', 'o', 'r', 'd'};

	ft_strncpy(dest, src, 12);
	printf("%s\n", dest);	
	return(0);
}
