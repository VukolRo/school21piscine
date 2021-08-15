/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shavok <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 12:36:01 by shavok            #+#    #+#             */
/*   Updated: 2021/07/28 21:42:53 by shavok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	ftl;

	ftl = 1;
	if (nb < 0)
		ftl = 0;
	while (nb != 0 && nb > 0)
	{
		ftl = ftl * nb;
		nb--;
	}
	return (ftl);
}
