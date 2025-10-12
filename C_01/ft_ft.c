
void	ft_ft(int *nbr)
{
	*nbr = 42;
}

#include <stdio.h>

int	main(void)
{
	int	n;

	n = 0;
	printf("%i\n", n);
	ft_ft(&n);
	printf("%i\n", n);
	return (0);
}
