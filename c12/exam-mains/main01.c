#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

void print_list(t_list *head) 
{
	t_list *current = head;
	
	while (current)
	{
		printf("%s\n", current->data);
		current = current->next;
	}
}

t_list	*ft_create_elem(void *data)
{
	t_list	*e1;

	e1 = (t_list *)malloc(sizeof(t_list));
	if (e1)
	{
		e1->data = data;
		e1->next = NULL;
	}
	return (e1);
}

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*front;

	front = ft_create_elem(data);
	front->next = *begin_list;
	*begin_list = front;
}

int main()
{
	t_list	**begin;
	t_list	*temp;
	char	*s;
	char	*b;

	b = "lol";
	s = "voila";
	temp = ft_create_elem(b);
	begin = &temp;
	ft_list_push_front(begin, s);
	print_list(*begin);
	return(0);
}
