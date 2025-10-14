#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	if (nb < 0)
		return (0);
	i = 0;
	res = 1;
	while (++i <= nb)
	{
		res *= i;
	}
	return (res);
}

int	main(void)
{
	int	n;

	printf("Enter a number:\n");
	scanf("%i", &n);
	printf("Result: %i\n", ft_iterative_factorial(n));
	return (0);
}
