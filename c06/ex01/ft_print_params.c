/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shavok <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 13:08:56 by shavok            #+#    #+#             */
/*   Updated: 2021/07/28 14:56:10 by shavok           ###   ########.fr       */
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
	int	p;
	int	i;

	i = 1;
	p = argc;
	while (i < p)
	{
		b = ft_strlen(argv[i]);
		write (1, argv[i], b);
		write (1, "\n", 1);
		i++;
	}
	return (0);
}
