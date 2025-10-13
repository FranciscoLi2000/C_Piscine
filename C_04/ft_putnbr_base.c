#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);

int	check_base(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0' || str[i] == '\0')
		return (0);
	while (str[i])
	{
		j = 0;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		if (str[i] == '+' || str[i] == '-')
			return (0);
		i++;
	}
}

void	ft_putnbr_base(int nbr, char *base);
{
	int	bs;

	bs = check_base(base);
	if (bs == 0)
		return ;
	if (nb == -2147483648)
		ft_putstr("-2147483648");
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= bs)
		ft_putnbr(nb / bs);
	ft_putchar(nb % bs + '0');
}
