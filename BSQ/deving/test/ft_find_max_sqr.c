/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_max_sqr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncream <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 19:28:27 by ncream            #+#    #+#             */
/*   Updated: 2021/08/11 23:30:05 by shavok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	**ft_find_max_sqr(int **arr, t_bsq_vars *vars)
{
	int	i;
	int	j;

	vars->max_sqr = arr[0][0];
	vars->max_sqr_i = 0;
	vars->max_sqr_j = 0;
	i = 0;
	while (i < vars->str_count)
	{
		j = 0;
		while (j < vars->str_len)
		{
			if (vars->max_sqr < arr[i][j])
			{
				vars->max_sqr = arr[i][j];
				vars->max_sqr_i = i;
				vars->max_sqr_j = j;
			}
			j++;
		}
		i++;
	}
	ft_print_max_sqr(arr, vars);
	return (0);
}
