/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shavok <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 20:17:43 by shavok            #+#    #+#             */
/*   Updated: 2021/07/23 09:15:52 by shavok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	char	combs[5];
	int		numbs[2];

	numbs[0] = 0;
	combs[2] = ' ';
	while (numbs[0] <= 98)
	{
		numbs[1] = numbs[0] + 1;
		while (numbs[1] <= 99)
		{
			combs[0] = numbs[0] / 10 + '0';
			combs[1] = numbs[0] % 10 + '0';
			combs[3] = numbs[1] / 10 + '0';
			combs[4] = numbs[1] % 10 + '0';
			write(1, &combs, 5);
			if (numbs[0] != 98)
				write(1, ", ", 2);
			numbs[1]++;
		}
		numbs[0]++;
	}
}

int main ()
{
	ft_print_comb2();
	return(0);
}
