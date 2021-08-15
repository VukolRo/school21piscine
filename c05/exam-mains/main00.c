#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int ft_iterative_factorial(int nb)
{
    int ftl;
    
    ftl = 1;
    if (nb < 0)
        ftl = 0;
    
    while (nb != 0 && nb > 0)
    {
        ftl = ftl * nb;
        nb--;
    }
    return(ftl);
}


int main()
{
    printf("%d\n", ft_iterative_factorial(-1));

    return (0);
}
