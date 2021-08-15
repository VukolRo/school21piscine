#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int ft_fibonacci(int index)
{
    if (index == 0)
        return (0);
    if (index < 0)
        return (-1);
    if (index == 1)
        return (1);
    else
        return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int main()
{
    printf("%d\n", ft_fibonacci(-2));

    return (0);
}
