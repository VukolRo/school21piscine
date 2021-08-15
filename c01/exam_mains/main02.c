#include <stdio.h>

/*void	ft_swap(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
*/

int main(void)
{
	int n;
	int m;
	int *a;
	int *b;

	n = 5;
	m = 0;
	a = &n;
	b = &m;

	ft_swap(a, b);

	printf("%d\n", n);
	printf("%d\n", m);
	return(0);
}
