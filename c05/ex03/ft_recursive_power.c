/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shavok <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 14:27:15 by shavok            #+#    #+#             */
/*   Updated: 2021/07/28 23:03:06 by shavok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0 && nb == 1)
		return (1);
	if (power < 0 && power % 2 == 0 && nb == -1)
		return (1);
	if (power < 0 && power % 2 != 0 && nb == -1)
		return (-1);
	else if (power % 2 != 0)
	{
		nb = nb * ft_recursive_power(nb, (power - 1));
		return (nb);
	}
	else
	{
		nb = ft_recursive_power(nb, (power / 2));
		return (nb * nb);
	}
}
