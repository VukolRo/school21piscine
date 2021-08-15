/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_max_sqr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncream <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 20:49:07 by ncream            #+#    #+#             */
/*   Updated: 2021/08/11 23:27:26 by shavok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	**ft_print_max_sqr(int **arr, t_bsq_vars *vars)
{
	int	i;
	int	j;

	i = 0;
	while (i < vars->str_count)
	{
		j = 0;
		while (j < vars->str_len)
		{
			if (i > (vars->max_sqr_i - vars->max_sqr)
				&& j > (vars->max_sqr_j - vars->max_sqr)
				&& i <= vars->max_sqr_i && j <= vars->max_sqr_j)
				write (1, &vars->full, 1);
			else
			{
				if (arr[i][j] == 0)
					write (1, &vars->obst, 1);
				else
					write (1, &vars->empt, 1);
			}
			j++;
		}
		write (1, "\n", 1);
		i++;
	}
	free (arr);
	return (0);
}
