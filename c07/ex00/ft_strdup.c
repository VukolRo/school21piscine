/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shavok <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 17:11:01 by shavok            #+#    #+#             */
/*   Updated: 2021/07/29 17:58:58 by shavok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// length of str
int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	return (l);
}

//copy str from src to dest
char	*ft_strcp(char *dest, char *src)
{
	int	i;

	i = 0;
	while (i < ft_strlen(src))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

//allocates the requested memory in heap and returns a pointer to it.
char	*ft_strdup(char *src)
{
	char	*A;
	int		l;

	l = ft_strlen(src) + 1;
	A = (char *)malloc((l) * sizeof(char));
	if (A == NULL)
		return (NULL);
	else
		ft_strcp(A, src);
	return (A);
}
