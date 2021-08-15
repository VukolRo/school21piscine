/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_read.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncream <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 19:24:05 by ncream            #+#    #+#             */
/*   Updated: 2021/08/11 20:53:52 by ncream           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_open_read(char *argv, t_bsq_vars *vars)
{
	int		opn;
	int		rd;
	char	buf;
	char	temp[R_SIZE];

	opn = open (argv, O_RDONLY);
	rd = read(opn, &buf, 1);
	vars->fst_str_len = 0;
	while (buf != '\n')
	{
		vars->fst_str_len++;
		rd = read(opn, &buf, 1);
	}
	vars->map_len = 0;
	while (rd > 0)
	{
		vars->map_len = vars->map_len + rd;
		rd = read(opn, &temp, R_SIZE);
	}
	close (opn);
	ft_check_error(argv, vars);
	return (0);
}
