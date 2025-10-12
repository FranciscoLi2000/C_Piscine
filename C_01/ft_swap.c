#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(void)
{
	int	x = 23;
	int	y = 89;

	printf("x = %i, y = %i\n", x, y);
	ft_swap(&x, &y);
	printf("x = %i, y = %i\n", x, y);
	return (0);
}
