/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_of_vlues.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncream <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 19:27:43 by ncream            #+#    #+#             */
/*   Updated: 2021/08/11 20:58:30 by ncream           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_min_of_vlues(int a, int b, int c)
{
	int	m;

	m = a;
	if (m > b)
		m = b;
	if (m > c)
		m = c;
	return (m);
}
