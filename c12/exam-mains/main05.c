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

t_list	*ft_list_push_strs(int size, char **strs)
{
	
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*back;
	t_list	*temp;


	back = ft_create_elem(data);
	temp = *begin_list; 	
	if (!*begin_list)
	{
		*begin_list = back;
	}
	else
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = back;
	}
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

	temp = ft_create_elem("voila");
	begin = &temp;
	ft_list_push_front(begin, "lol");
	print_list(*begin);
	printf("%d\n", ft_list_size(*begin));
	//print_list(ft_list_last(*begin));
	ft_list_push_back(begin, "coucou");
	print_list(*begin);
	printf("%d\n", ft_list_size(*begin));
	return(0);
}

