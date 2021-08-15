/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shavok <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 13:33:09 by shavok            #+#    #+#             */
/*   Updated: 2021/07/27 13:35:38 by shavok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	p;

	p = 1;
	if (power < 0)
		return (0);
	else if (power == 0 && nb == 0)
		return (1);
	else
	{
		while (power != 0)
		{
			p = p * nb;
			power--;
		}
		return (p);
	}
}
