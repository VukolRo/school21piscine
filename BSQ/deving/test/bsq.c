/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncream <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 19:22:38 by ncream            #+#    #+#             */
/*   Updated: 2021/08/11 23:33:34 by shavok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(int argc, char **argv)
{
	int			i;
	t_bsq_vars	*vars;

	i = 1;
	vars = ft_create_struct();
	vars->check_error = -1;
	if (argc == 1)
		ft_no_args(vars);
	else
	{
		while (i < argc)
		{
			ft_open_read(argv[i], vars);
			i++;
		}
	}
	free (vars);
	return (0);
}
