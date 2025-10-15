#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*res;

	i = 0;
	if (min >= max)
		return (NULL);
	res = malloc((max - min) * sizeof(int));
	if (!res)
		return (NULL);
	while (min < max)
	{
		res[i] = min;
		min++;
		i++;
	}
	return (res);
}
