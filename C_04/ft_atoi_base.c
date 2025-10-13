#include <stdio.h>
#include <stdlib.h>

int	check_base(char *str);

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	res;
	int	bs;

	i = 0;
	sign = 1;
	bs = check_base(base);
	if (base == 0)
		return (0);
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i])
	{
		res *= bs;
		if (str[i] >= '0' && str[i] <= '9')
			res += str[i] - '0';
		if (str[i] >= 'A' && str[i] <= 'F')
			res += str[i] - 'A' + 10;
		if (str[i] >= 'a' && str[i] <= 'f')
			res += str[i] - 'a' + 10;
		i++;
	}
	return (sign * res);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("%i\n", ft_atoi_base(argv[1], argc[2]));
	return (0);
}
