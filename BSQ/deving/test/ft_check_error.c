/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncream <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 19:24:33 by ncream            #+#    #+#             */
/*   Updated: 2021/08/11 23:31:06 by shavok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_check_error(char *argv, t_bsq_vars *vars)
{
	int		opn;
	int		i;
	char	temp[vars->fst_str_len + 1];

	opn = open (argv, O_RDONLY);
	read(opn, &temp, vars->fst_str_len + 1);
	i = 0;
	vars->check_error = -1;
	if (vars->fst_str_len < 4)
	{	
		vars->check_error = 1;
	}
	while (i <= vars->fst_str_len - 4)
	{
		if (temp[i] < '0' && temp[i] > '9')
			vars->check_error = 1;
		i++;
	}
	close(opn);
	ft_print_error(argv, vars);
	return (0);
}
