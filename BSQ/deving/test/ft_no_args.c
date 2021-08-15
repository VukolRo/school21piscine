/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_no_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncream <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 19:23:32 by ncream            #+#    #+#             */
/*   Updated: 2021/08/11 20:52:29 by ncream           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_no_args(t_bsq_vars *vars)
{
	char	bufff;
	int		rd;
	char	cre;
	char	*name;

	name = "mapinput";
	cre = open (name, O_CREAT | O_TRUNC | O_WRONLY,
			S_IRWXU | S_IRWXO | S_IRWXG);
	rd = read (0, &bufff, 1);
	while (rd > 0)
	{
		write (cre, &bufff, 1);
		rd = read (0, &bufff, 1);
		if (rd == 0)
			break ;
	}
	close (cre);
	ft_open_read(name, vars);
	return (0);
}
