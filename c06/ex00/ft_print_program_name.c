/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shavok <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 10:39:26 by shavok            #+#    #+#             */
/*   Updated: 2021/07/28 14:33:02 by shavok           ###   ########.fr       */
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

	(void) argc;
	b = ft_strlen(argv[0]);
	write (1, argv[0], b);
	write (1, "\n", 1);
	return (0);
}
