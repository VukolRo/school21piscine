#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	//write (1, &i, 1);
	return(i);
}

int main()
{
	char	*str;

	str = "hello";
	printf("%d\n", ft_strlen(str));
	return(0);
}
