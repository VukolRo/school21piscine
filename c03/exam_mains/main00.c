
#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2)
{
    int ret;
    
    while (*s1 != '\0') 
	{
        if (*s1 != *s2)
        {
            ret =  *s1 - *s2;
            return  (ret);
        }
        s1++;
        s2++;
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
    
    a = "de";
    b = "dfer";
    i = ft_strcmp (a, b);
    r = strcmp(a, b);
    printf("%d\n", i);
    printf("%d\n", r);
    return (0);
}
