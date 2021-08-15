/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shavok <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 20:20:40 by shavok            #+#    #+#             */
/*   Updated: 2021/07/25 20:26:02 by shavok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	e;

	i = 0;
	e = 0;
	while (dest[i] != '\0')
		i++;
	while (src[e] != '\0' && e < nb)
	{
		dest[i] = src[e];
		i++;
		e++;
	}
	dest[i++] = '\0';
	return (dest);
}
