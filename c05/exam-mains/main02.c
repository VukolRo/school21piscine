#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int ft_iterative_power(int nb, int power)
{
    int p;
    
    p = 1;
    if (power < 0)
        return (0);
    else if (power == 0 && nb == 0)
        return (1);
    else
    {
        while (power != 0)
        {
            p = p * nb;
            power--;
        }
        return (p);
    }
}


int main()
{
    printf("%d\n", ft_iterative_power(-2, 3));

    return (0);
}
