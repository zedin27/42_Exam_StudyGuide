#include "ft_list.h"

int			ft_list_size(t_list *begin_list)
{
	int	i;

	i = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (i);
}

#ifdef TEST

#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	int data = 0;

	t_list *node1 = malloc(sizeof(t_list));
	node1->next = NULL;
	node1->data = &data;

	t_list *node2 = malloc(sizeof(t_list));
	node2->next = node1;
	node2->data = &data;

	t_list *node3 = malloc(sizeof(t_list));
	node3->next = node2;
	node3->data = &data;

	printf("%d\n", ft_list_size(node3));
	return (0);
}

#endif
