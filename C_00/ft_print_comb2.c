#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	print_content(int n1, int n2)
{
	ft_putchar(n1 / 10 + '0');
	ft_putchar(n1 % 10 + '0');
	ft_putchar(' ');
	ft_putchar(n2 / 10 + '0');
	ft_putchar(n2 % 10 + '0');
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			print_content(x, y);
			if (x != 98 && y != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			y++;
		}
		x++;
	}
}
