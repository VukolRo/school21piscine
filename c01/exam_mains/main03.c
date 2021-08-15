#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main ()
{
	int x;
	int y;
	int *div;
	int *mod;


	div = &x;
	mod = &y;
	ft_div_mod(12, 10, div, mod);

	printf("%d\n", x);
	printf("%d\n", y);
	
}
