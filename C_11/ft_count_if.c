#include <stdio.h>

int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (tab[i] != NULL)
	{
		if ((*f)(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}
