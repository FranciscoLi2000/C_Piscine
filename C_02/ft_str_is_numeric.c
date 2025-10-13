#include <stdio.h>

int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (1);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}
