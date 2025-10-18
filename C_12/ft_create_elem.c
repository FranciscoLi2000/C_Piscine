#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*cur;

	cur = (t_list *)malloc(sizeof(t_list));
	if (!cur)
		return (NULL);
	cur->data = data;
	cur->next = NULL;
	return (cur);
}
