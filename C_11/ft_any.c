#include <stdio.h>

int	ft_any(char **tab, int(*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i] != NULL)
	{
		if ((*f)(tab[i]) != 0)
			return (0);
		i++;
	}
	return (1);
}
