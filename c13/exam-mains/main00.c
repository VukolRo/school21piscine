#include "ft_btree.h"
#include <stdlib.h>
#include <stdio.h>

void print_btree(t_btree *head)
{
	t_btree *current = head;

	while (current)
	{
		printf("%s\n", current->item);
		current = current->left;
	}
}


t_btree *btree_create_node(void *item)
{
	t_btree	*t1;

	t1 = (t_btree *)malloc(sizeof(t_btree));
	if (t1)
	{
		t1->item = item;
		t1->left = (t_btree *)0;
		t1->right = (t_btree *)0;
	}
	return (t1);
}
int main()
{
	t_btree	**begin;
	t_btree	*temp;
	//char	*s;
	char	*b;

	b = "lol";
	//s = "voila";
	temp = btree_create_node(b);
	begin = &temp;
	//ft_list_push_front(begin, s);
	print_btree(*begin);
	return(0);
}
