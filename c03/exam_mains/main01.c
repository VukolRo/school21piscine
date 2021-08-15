
#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int ret;
    unsigned int i;
    
    i = 1;
    while (*s1 != '\0' && i != n) 
	{
        if (*s1 != *s2)
        {
            ret =  *s1 - *s2;
            return  (ret);
        }
        s1++;
        s2++;
        i++;
    }
    ret = *s1 - *s2;
    return (ret);
}

int main()
{
    int i;
    int r;
    char *a;
    char *b;
    
    a = "dfz";
    b = "dft";
    i = ft_strncmp (a, b, 3);
    r = strncmp(a, b, 3);
    printf("%d\n", i);
    printf("%d\n", r);
    return (0);
}
