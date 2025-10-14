#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (nb == 0)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}

int	main(void)
{
	int	n;
	int	p;

	printf("Enter a base number:\n");
	scanf("%i", &n);
	printf("Enter a power number:\n");
	scanf("%i", &p);
	printf("Result: %i\n", ft_recursive_power(n, p));
	return (0);
}
