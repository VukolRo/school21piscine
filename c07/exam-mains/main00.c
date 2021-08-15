#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// length of str
int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	return (l);
}

//copy str from src to dest
char *ft_strcp(char *dest, char *src)
{
    int i;
    
    i = 0;
    while (i < ft_strlen(src))
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

//allocates the requested memory in heap and returns a pointer to it.
char *ft_strdup(char *src)
{
    char *A;
    int l; //length(src) + 1
    
    l = ft_strlen(src) + 1;
    A = (char *)malloc((l) * sizeof(char));
	if (A == NULL)
        return (NULL);
    else
		ft_strcp(A, src);
	return (A);
}

int main()
{
    char *str;
    
    str = "lol";
    printf("%s\n", ft_strdup(str));
    //printf("%s\n", strdup(str));

    return 0;
}
