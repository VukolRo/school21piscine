/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncream <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 21:00:05 by ncream            #+#    #+#             */
/*   Updated: 2021/08/11 21:00:17 by ncream           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_print_error(char *argv, t_bsq_vars *vars)
{
	if (vars->check_error > 0)
	{
		write(2, "map error\n", 10);
		vars->check_error = 1;
		ft_open_read(argv, vars);
	}
	else
		ft_taking_vars(argv, vars);
	return (0);
}
