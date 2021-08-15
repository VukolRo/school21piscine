#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int ft_sqrt(int nb)
{
    int i;
    
    i = 0;
    while (i < nb / 2)
    {
		if (i * i != nb)
            i++;
		else if (i * i == nb)
            return (i);
    }
	return (0);
}

int main()
{
    printf("%d\n", ft_sqrt(2138137600));

    return (0);
}
