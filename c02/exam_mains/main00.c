#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}

int main()
{
	char	a[3];
	char	b[4];


	a = lol";
	b = "oops";

	ft_strcpy(b, a);

	printf("%s\n",b);
	return (0);
}
