/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shavok <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 23:15:19 by shavok            #+#    #+#             */
/*   Updated: 2021/08/11 23:35:34 by shavok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# define R_SIZE 24000

# include <unistd.h>
# include <fcntl.h>
# include <errno.h>
# include <string.h>
# include <libgen.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct t_bsq_vars
{
	char	empt;
	char	obst;
	char	full;
	int		str_len;
	int		str_count;
	int		fst_str_len;
	int		map_len;
	int		max_sqr;
	int		max_sqr_i;
	int		max_sqr_j;
	int		check_error;
	int		m;
	int		n;
}			t_bsq_vars;
t_bsq_vars	*ft_create_struct(void);
int			*ft_print_error(char *argv, t_bsq_vars *vars);
int			**ft_print_max_sqr(int **arr, t_bsq_vars *vars);
int			**ft_find_max_sqr(int **arr, t_bsq_vars *vars);
int			ft_min_of_vlues(int a, int b, int c);
int			**ft_find_sqr(int **arr, t_bsq_vars *vars);
int			*ft_map_to_arr(int opn, char *argv, t_bsq_vars *vars);
int			*ft_taking_vars(char *argv, t_bsq_vars *vars);
void		*ft_check_error(char *argv, t_bsq_vars *vars);
int			*ft_open_read(char *argv, t_bsq_vars *vars);
int			*ft_no_args(t_bsq_vars *vars);
#endif
