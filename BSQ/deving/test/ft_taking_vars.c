/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_taking_vars.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncream <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 19:25:10 by ncream            #+#    #+#             */
/*   Updated: 2021/08/11 23:34:38 by shavok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_taking_vars(char *argv, t_bsq_vars *vars)
{
	int		opn;
	char	temp[vars->fst_str_len + 1];

	opn = open (argv, O_RDONLY);
	read(opn, &temp, vars->fst_str_len + 1);
	vars->m = 0;
	vars->str_count = 0;
	while (vars->n <= vars->fst_str_len - 4)
	{
		vars->str_count = vars->str_count * 10;
		vars->str_count = vars->str_count + (temp[vars->n] - '0');
		vars->n++;
	}
	vars->map_len = vars->map_len - vars->str_count - 1;
	vars->str_len = vars->map_len / vars->str_count;
	vars->empt = temp[vars->fst_str_len - 3];
	vars->obst = temp[vars->fst_str_len - 2];
	vars->full = temp[vars->fst_str_len - 1];
	if (vars->empt == vars->obst || vars->empt == vars->full
		|| vars->obst == vars->full)
	{
		vars->check_error = 1;
		ft_print_error(argv, vars);
	}
	ft_map_to_arr(opn, argv, vars);
	return (0);
}
