/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shavok <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 20:34:59 by shavok            #+#    #+#             */
/*   Updated: 2021/08/06 20:39:41 by shavok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_BTREE_H
# define FT_BTREE_H
typedef struct s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*item;
}				t_btree;
#endif
