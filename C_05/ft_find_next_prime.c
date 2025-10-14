#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (1)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
}

int	main(void)
{
	int	n;

	printf("Enter a number to test:\n");
	while (scanf("%i", &n))
	{
		printf("Result: %i\n", ft_find_next_prime(n));
		printf("You can enter another number (non-digit to quit)\n");
	}
	printf("Bye\n");
	return (0);
}
