/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_to_arr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncream <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 19:25:45 by ncream            #+#    #+#             */
/*   Updated: 2021/08/11 23:27:47 by shavok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_map_to_arr(int opn, char *argv, t_bsq_vars *vars)
{
	int		**arr;
	char	*temp;

	(void)argv;
	temp = (char *)malloc((vars->str_len + 1) * sizeof(char));
	arr = (int **)malloc(vars->str_count * sizeof(int *));
	vars->m = 0;
	while (vars->m < vars->str_count)
	{
		vars->n = 0;
		arr[vars->m] = (int *)malloc((vars->str_len + 1) * sizeof(int ));
		read(opn, temp, vars->str_len + 1);
		while (vars->n <= vars->str_len)
		{
			if (temp[vars->n] == vars->empt)
				arr[vars->m][vars->n] = 1;
			if (temp[vars->n] == vars->obst)
				arr[vars->m][vars->n] = 0;
			vars->n++;
		}
		vars->m++;
	}
	free (temp);
	close (opn);
	ft_find_sqr(arr, vars);
	return (0);
}
