#include <stdio.h>

char    *ft_strcpy(char *dest, char *src)
{
	char *buff;

	buff = dest;
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
	dest = buff;
    return (dest);
}

int main()
{
    char	*src[3]; 
    char	*dest[5]; 

	src = {'L', 'o', 'l'};
	dest = {'h', 'e', 'l', 'l', 'o'};
	ft_strcpy(dest, src);
    printf("%s\n",dest);
    return(0);
}
