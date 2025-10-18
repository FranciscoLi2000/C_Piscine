#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*cur;
	int		i;

	i = 0;
	cur = begin_list;
	while (cur)
	{
		i++;
		cur = cur->next;
	}
	return (i);
}
