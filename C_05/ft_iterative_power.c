#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	if (nb == 0)
		return (0);
	if (power == 0)
		return (1);
	i = 0;
	res = 1;
	while (i < power)
	{
		res *= nb;
		i++;
	}
	return (res);
}

int	main(void)
{
	int	n;
	int	p;

	printf("Enter a base number:\n");
	scanf("%i", &n);
	printf("Enter a power number:\n");
	scanf("%i", &p);
	printf("Result: %i\n", ft_iterative_power(n, p));
	return (0);
}
