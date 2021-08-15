/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shavok <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 14:57:13 by shavok            #+#    #+#             */
/*   Updated: 2021/07/28 15:05:34 by shavok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
		l++;
	return (l);
}

int	main(int argc, char **argv)
{
	int	b;
	int	i;

	i = argc - 1;
	while (i > 0)
	{
		b = ft_strlen(argv[i]);
		write (1, argv[i], b);
		write (1, "\n", 1);
		i--;
	}
	return (0);
}
