#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *A;
    long long int p;
    int i;
    
    i = 0;
    p = (long long)max - (long long)min;
	if (p > 2147483647)
		return (NULL);
    if (min >= max)
    {
        return (NULL);
    }
    A = (int *)malloc((p) * sizeof(int));
    if (A == NULL)
        return (NULL);
    
    while (i < p)
    {
        A[i] = min;
        i++;
        min++;
    }
    return (A);
}

int main()
{
    int *tab;
    int i;
    
    i = 0;
    tab = ft_range(-1, 2147483647);
    /*while (i < 10)
    {
        printf("%d ", tab[i]);
        i++;
    }*/
	printf("%p", tab);
    return (0);
}
