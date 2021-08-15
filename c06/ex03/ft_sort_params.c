#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	ret;

	while (*s1 != '\0')
	{
		if (*s1 != *s2)
		{
			ret = *s1 - *s2;
			return (ret);
		}
		s1++;
		s2++;
	}
	ret = *s1 - *s2;
	return (ret);
}

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
		l++;
	return (l);
}

char	**sort(int arg, char **arr)
{
	int		i;
	int		j;
	char	*buff;

	i = 1;
	while (i < arg)
	{	
		j = i + 1;
		while (j < arg)
		{
			if (ft_strcmp(arr[i], arr[j]) > 0)
			{
				buff = arr[j];
				arr[j] = arr[i];
				arr[i] = buff;
			}
			j++;
		}
		i++;
	}
	return (arr);
}

int	main(int argc, char **argv)
{
	int	c;
	int	b;

	sort(argc, argv);
	c = 1;
	while (c < argc)
	{
		b = ft_strlen(argv[c]);
		write (1, argv[c], b);
		write (1, "\n", 1);
		c++;
	}
	return (0);
}
