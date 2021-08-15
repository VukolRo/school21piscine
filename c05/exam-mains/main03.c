#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int ft_recursive_power(int nb, int power)
{
    if (power == 0)
       return (1);
	if (power < 0 && nb == 1)
		return (1);
	if (power < 0 && power % 2 == 0 && nb == -1)
		return (1);
	if (power < 0 && power % 2 != 0 && nb == -1)
		return (-1);
    else if (power % 2 != 0)
    {
        nb = nb * ft_recursive_power(nb, (power - 1));
        return (nb);
    }
    else
    {
        nb = ft_recursive_power(nb, (power / 2));
        return (nb * nb);
    }
}

int main()
{
    printf("%d\n", ft_recursive_power(2, 5));

    return (0);
}
