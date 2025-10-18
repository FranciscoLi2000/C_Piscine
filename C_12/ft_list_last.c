#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*cur;

	cur = begin_list;
	if (!cur)
		return (NULL);
	while (cur->next)
		cur = cur->next;
	return (cur);
}
