#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int res;

	i = 0;
	res = 1;
	while(str[i] != '\0')
	{
		if (str[i] > 'Z' || str[i] < 'A')
		{
			if (str[i] > 'z' || str[i] < 'a')
			{
				res = 0;
				return (res);
			}
		}
		i++;
	}
	return(res);
}

int main()
{
	char	*str;
	int	a;

	str = "qweqweq1231";
	ft_str_is_alpha(str);
	a =	ft_str_is_alpha(str);
	printf("%d", a);
	return(0);	
}
