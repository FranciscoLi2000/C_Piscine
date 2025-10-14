#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

int	main(void)
{
	int	i;

	printf("Enter a number for index:\n");
	scanf("%i", &i);
	printf("Result: %i\n", ft_fibonacci(i));
	return (0);
}
