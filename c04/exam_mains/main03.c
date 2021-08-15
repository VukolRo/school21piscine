#include <stdio.h>
#include <string.h>
#include <unistd.h>

int ft_atoi(char *str)
{
    int mult;
    int num;

    mult = 1;
    while (*str == ' ' || *str == '\f' || *str == '\n' || *str == '\r' 
			|| *str == '\t' || *str == '\v')
    {
        str++;
    }
    while (*str == '-' || *str == '+')
    {
        if (*str == '-')
            mult *= -1;
        str++;
    }
    num = 0;
    while (*str >= '0' && *str <= '9')
    {
        num = num * 10 + (*str - '0');
        str++;
    }
    return(num * mult);
}


int main()
{
    char *str =  " -+000420021a--++-24234";
    
    printf("%d", ft_atoi(str));
    return (0);
}
