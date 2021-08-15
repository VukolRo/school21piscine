#include <unistd.h>

void    ft_putnbr(int nb)
{
    int i;
    
	if (nb < 0 && nb > -2147483648)
    {
        write (1, "-", 1);
        ft_putnbr(-nb);
    }
	else if (nb == -2147483648)
	{
		write (1, "-", 1);
        nb = 214748364;
        ft_putnbr(nb);
		ft_putnbr(8);
	}
    else if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
    {
        i = nb + '0';
        write (1, &i, 1);
    }
}

int main()
{
	ft_putnbr(42);
    return (0);
}
