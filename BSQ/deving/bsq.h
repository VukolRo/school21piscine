#ifndef BSQ_H
# define BSQ_H
# define R_SIZE 24000

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
}			t_bsq_vars;
#endif