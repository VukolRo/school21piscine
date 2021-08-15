#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int x;

	x = *a % *b;
	*a = *a / *b;
	*b = x;
}

int main()
{
	int *a;
	int *b;
	int c;
	int d;

	c = 24;
	d = 10;
	a = &c;
	b = &d;
	ft_ultimate_div_mod(a, b);
	printf("%d\n", c);
	printf("%d\n", d);
	return(0);
}
