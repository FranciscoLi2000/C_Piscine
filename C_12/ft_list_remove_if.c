#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*cur;
	t_list	*nex;
	t_list	*prev;

	if (!begin_list || !*begin_list)
		return ;
	cur = *begin_list;
	prev = NULL;
	while (cur)
	{
		nex = cur->next;
		if ((*cmp)(cur->data, data_ref) == 0)
		{
			(*free_fct)(cur->data);
			free(cur);
			if (prev == NULL)
				*begin_list = nex;
			else
				prev->next = nex;
		}
		else
			prev = cur;
		cur = nex;
	}
}
