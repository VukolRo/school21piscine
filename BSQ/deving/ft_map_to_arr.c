/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_to_arr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shavok <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 15:01:48 by shavok            #+#    #+#             */
/*   Updated: 2021/08/11 15:02:08 by shavok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		**ft_map_to_arr(int opn, t_bsq_vars *vars)
{
	int		**arr;
	char	*temp;
	int		i;
	int		j;

	temp = (char *)malloc(sizeof(char));
	arr = (int **)malloc(vars->str_count * sizeof(int *));
	i = 0;
	while (i < vars->str_count)
	{
		j = 0;
		arr[i] = (int *)malloc((vars->str_len + 1) * sizeof(int ));
		read(opn, temp, vars->str_len + 1);
		while (j <= vars->str_len)
		{
			if (temp[j] == vars->empt)
				arr[i][j] = 1;
			if (temp[j] == vars->obst)
				arr[i][j] = 0;
			j++;
		}
		i++;
	}
	free (temp);
	close (opn);
	ft_find_sqr(arr, vars);
	return (0);
}
