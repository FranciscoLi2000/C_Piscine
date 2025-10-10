
int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	res = 1;
	i = 1;
	while (i <= power)
	{
		res *= nb;
		i++;
	}
	return (res);
}
