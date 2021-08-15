#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int ft_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);

}

int ft_find_next_prime(int nb)
{
    if (ft_prime(nb) == 1)
        return(nb);
    else
    {
        while (ft_prime(nb) != 1)
            nb++;
        return (nb);
    }   
}

int main()
{
    printf("%d\n", ft_find_next_prime(-8));

    return (0);
}
