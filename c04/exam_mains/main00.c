#include <stdio.h>
#include <string.h>

int ft_strlen(char *str)
{
    int l;
   
    l = 0;
    while (str[l] != '\0')
    {
        l++;
    }
    return(l);
}

int main()
{
    char *str;
    
    str = "lol";
    printf("%d\n", ft_strlen(str));
    printf("%lu\n", strlen(str));
    return (0);
}
