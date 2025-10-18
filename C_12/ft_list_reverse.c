#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
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
		cur->next = prev;
		prev = cur;
		cur = nex;
	}
	*begin_list = prev;
}
