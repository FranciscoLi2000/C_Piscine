#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*cur;
	t_list	*nex;

	cur = begin_list;
	while (cur)
	{
		nex = cur->next;
		(*free_fct)(cur->data);
		free(cur);
		cur = nex;
	}
	begin_list = NULL;
}
