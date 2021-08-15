#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <libgen.h>
#include <stdio.h>
#include <stdlib.h>
#include "bsq.h"

t_bsq_vars	*ft_create_struct()
{
	t_bsq_vars	*vars;
	vars = (t_bsq_vars *)malloc(sizeof(t_bsq_vars));
	return (vars);
}

int		**ft_print_error(int err_count, char **argv, t_bsq_vars *vars)
{
	vars->check_error = 0;
	if (err_count > 0)
	{
		write(2, "map error\n", 10);
		vars->check_error = 1;
		ft_open_read(argv, vars);
	}
	else
		ft_taking_vars(argv, vars);
	return (0);
}

int		**ft_print_max_sqr(int **arr, t_bsq_vars *vars)
{
	int	i;
	int	j;

	i = 0;
	while (i < vars->str_count)
	{
		j = 0;
		while (j < vars->str_len)
		{
			if (i > (vars->max_sqr_i - vars->max_sqr) && j > (vars->max_sqr_j - vars->max_sqr)
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

int		**ft_find_max_sqr(int **arr, t_bsq_vars *vars)
{
	int	i;
	int	j;
	vars->max_sqr = arr[0][0];
	vars->max_sqr_i = 0;
	vars->max_sqr_j = 0;
	i = 0;
	while (i < vars->str_count)
	{
		j = 0;
		while (j < vars->str_len)
		{
			if (vars->max_sqr < arr[i][j])
			{
				vars->max_sqr = arr[i][j];
				vars->max_sqr_i = i;
				vars->max_sqr_j = j;
			}
			j++;
		}
		i++;
	}
	ft_print_max_sqr(arr, vars);
	return (0);
}

int		ft_min_of_vlues(int a, int b, int c)
{
	int m;
	m = a;
	if (m > b)
    	m = b;
	if (m > c)
    	m = c;
	return (m);
}

int		**ft_find_sqr(int **arr, t_bsq_vars *vars)
{
	int	i;
	int	j;

	i = 1;
	while (i < vars->str_count)
	{
		j = 1;
		while (j < vars->str_len)
		{
			if (arr[i][j] == 1)
				arr[i][j] = ft_min_of_vlues(arr[i][j- 1], arr[i - 1][j], arr[i - 1][j - 1]) + 1;
			else
				arr[i][j] = 0;
			j++;
		}
		i++;
	}
	ft_find_max_sqr(arr, vars);
	return (0);
}

int		**ft_map_to_arr(int opn, char **argv, t_bsq_vars *vars)
{
	int		**arr;
	char	*temp;
	int		i;
	int		j;

	temp = (char *)malloc((vars->str_len + 1) * sizeof(char));
	arr = (int **)malloc(vars->str_count * sizeof(int *));
	i = 0;
	while (i < vars->str_count)
	{
		j = 0;
		arr[i] = (int *)malloc((vars->str_len + 1) * sizeof(int ));
		read(opn, temp, vars->str_len + 1);
		if (temp[vars->str_len + 1] != '\n')
		{
			free (temp);
			close (opn);
			free (arr);
			ft_print_error(1, argv, vars);
		}
		while (j <= vars->str_len)
		{
			if (temp[j] == vars->empt)
				arr[i][j] = 1;
			if (temp[j] == vars->obst)
				arr[i][j] = 0;
			else
				free (temp);
				close (opn);
				free (arr);
				ft_print_error(1, argv, vars);
			j++;
		}
		i++;
	}
	free (temp);
	close (opn);
	ft_find_sqr(arr, vars);
	return (0);
}

char	*ft_taking_vars(char *argv, t_bsq_vars *vars)
{
	int		opn;
	int		i;
	char	temp[vars->fst_str_len + 1];

	opn = open (argv, O_RDONLY);
	read(opn, &temp, vars->fst_str_len + 1);
	i = 0;
	vars->str_count = 0;	
	while(i <= vars->fst_str_len - 4)
	{
		vars->str_count = vars->str_count * 10;
		vars->str_count = vars->str_count + (temp[i] - '0');
	}
	vars->map_len = vars->map_len - vars->str_count - 1;
	vars->str_len = vars->map_len / vars->str_count;
	vars->empt = temp[vars->fst_str_len - 3];	
	vars->obst = temp[vars->fst_str_len - 2];	
	vars->full = temp[vars->fst_str_len - 1];
	ft_map_to_arr(opn, argv, vars);
	return (0);
}


int		*ft_check_error(char **argv, t_bsq_vars *vars)
{
	int		err_count;
	int		opn;
	int		i;
	char	temp[vars->fst_str_len + 1];

	opn = open (argv, O_RDONLY);
	read(opn, &temp, vars->fst_str_len + 1);
	i = 0;
	if (vars->fst_str_len < 4)
		err_count = 1;
	while(i <= vars->fst_str_len - 4)
	{
		if (temp[i] < '0' && temp[i]  > '9')
			err_count = 1;
	}
	close(opn);
	ft_print_error(err_count, argv, vars);
	return (0);
}

int		*ft_open_read(char *argv, t_bsq_vars *vars)
{
	int		opn;
	int		rd;
	char	buf;
	char	temp[R_SIZE];

	if (vars->check_error > 0)
		return(0);
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

int		*ft_no_args(t_bsq_vars *vars)
{
	char	bufff;
	int		rd;
	char	cre;
	char	*name;

	name = "mapinput";
	cre = open (name, O_CREAT | O_TRUNC | O_WRONLY, S_IRWXU | S_IRWXO | S_IRWXG);
	rd = read (0, &bufff, 1);
	while (rd > 0)
	{
		write (cre, &bufff, 1);
		rd = read (0, &bufff, 1);
		if (rd == 0)
			break;
	}
	close (cre);
	ft_open_read(name, vars);
	return (0);
}

int	main(int argc, char **argv)
{
	int			i;
	t_bsq_vars	*vars;
	
	i = 1;
	vars = ft_create_struct();

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
