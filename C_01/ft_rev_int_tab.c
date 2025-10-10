#include <unistd.h>

void	ft_putchar(char c)

void	ft_putnbr(int nb)

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
		i++;
	i--;
	while (i >= 0)
	{
		ft_putnbr(tab[i]);
		ft_putchar(' ');
		i--;
	}
}
