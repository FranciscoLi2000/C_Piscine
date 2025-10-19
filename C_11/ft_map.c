#include <stdio.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*result;

	result = malloc(sizeof(int) * length);
	if (!result)
		return (NULL);
	i = 0;
	while (i < length)
	{
		result[i] = (*f)(tab[i]);
		i++;
	}
	return (result);
}
