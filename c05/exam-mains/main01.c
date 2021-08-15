#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int ft_recursive_factorial(int nb)
{
    if (nb == 0)
        return (1);
    else if (nb < 0)
        return (0);
    else
    {
        nb = nb * ft_recursive_factorial(nb - 1);
        return(nb);
    }
}


int main()
{
	printf("%d\n", ft_recursive_factorial(1));

    return (0);
}
