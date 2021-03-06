/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shavok <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 13:35:30 by shavok            #+#    #+#             */
/*   Updated: 2021/07/25 15:50:02 by shavok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	ret;

	while (*s1 != '\0')
	{
		if (*s1 != *s2)
		{
			ret = *s1 - *s2;
			return (ret);
		}
		s1++;
		s2++;
	}
	ret = *s1 - *s2;
	return (ret);
}
