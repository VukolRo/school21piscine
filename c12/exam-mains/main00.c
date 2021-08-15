#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*e1;

	e1 = (t_list *)malloc(sizeof(t_list));
	if (e1)
	{
		e1->data = data;
		e1->next = (t_list *)0;
	}
	printf("%s\n", e1->data);
	return (e1);
}

int main()
{
	char *s;

	s = "lol";
	ft_create_elem(s);
	return (0);
}
