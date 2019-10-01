#include "ft_list.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *head = begin_list;

	while (head)
	{
		(*f)(head->data);
		head = head->next;
	}
	return ;
}


#ifdef TEST
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	print_me(void *str)
{
	printf("str: %s\n", (char*)str);
	return ;
}

int		main(void)
{
	t_list *node = malloc(sizeof(t_list));
	node->data = strdup("SHIT FUCKS\n");
	node->next = NULL;

	ft_list_foreach(node, &print_me);
	return (0);
}
#endif
