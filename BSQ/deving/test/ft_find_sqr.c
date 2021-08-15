/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_sqr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncream <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 19:26:32 by ncream            #+#    #+#             */
/*   Updated: 2021/08/11 20:59:09 by ncream           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	**ft_find_sqr(int **arr, t_bsq_vars *vars)
{
	int	i;
	int	j;

	i = 1;
	while (i < vars->str_count)
	{
		j = 1;
		while (j < vars->str_len)
		{
			if (arr[i][j] == 1)
				arr[i][j] = ft_min_of_vlues(arr[i][j - 1],
						arr[i - 1][j], arr[i - 1][j - 1]) + 1;
			else
				arr[i][j] = 0;
			j++;
		}
		i++;
	}
	ft_find_max_sqr(arr, vars);
	return (0);
}
