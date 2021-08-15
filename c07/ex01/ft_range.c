/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shavok <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 21:36:07 by shavok            #+#    #+#             */
/*   Updated: 2021/07/29 22:27:48 by shavok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int				*A;
	long long int	p;
	int				i;

	i = 0;
	p = (long long)max - (long long)min;
	if (p > 2147483647)
		return (NULL);
	if (min >= max)
		return (NULL);
	A = (int *)malloc((p) * sizeof(int));
	if (A == NULL)
		return (NULL);
	while (i < p)
	{
		A[i] = min;
		i++;
		min++;
	}
	return (A);
}
