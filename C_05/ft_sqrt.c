#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

int	main(void)
{
	int	n;

	printf("Enter a number to find its square:\n");
	while (scanf("%i", &n))
	{
		printf("Result: %i\n", ft_sqrt(n));
		printf("You can enter another number (non-digit to quit):\n");
	}
	printf("Bye.\n");
	return (0);
}
