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

int	ft_list_size(t_list *begin_list)
{
	int	count;

	count = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		count++;
	}
	return (count);
}

t_list	*ft_list_last(t_list *begin_list)
{
	while (begin_list->next)
	{
		begin_list = begin_list->next;
	}
	return (begin_list);
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
	printf("%d\n", ft_list_size(*begin));
	print_list(ft_list_last(*begin));
	return(0);
}
