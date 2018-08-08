#include "ft_list"

int			ft_list_size(t_list *begin_list)
{
	size_t	i;

	i = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (i);
}

int		main(void)
{
	t_list *node;
	ft_list_size(node);
	return (0);
}
