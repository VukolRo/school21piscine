/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shavok <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 22:56:57 by shavok            #+#    #+#             */
/*   Updated: 2021/07/29 22:57:03 by shavok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	long long int	p;
	int				i;

	i = 0;
	p = (long long)max - (long long)min;
	if (p > 2147483647)
		return (-1);
	if (min >= max)
	{
		return (0);
	}
	*range = (int *)malloc((p) * sizeof(int));
	if (*range == NULL)
		return (-1);
	while (i < p)
	{
		range[0][i] = min;
		i++;
		min++;
	}
	return (i);
}
