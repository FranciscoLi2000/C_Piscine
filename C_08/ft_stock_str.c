#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *str, int size)
{
	char	*res;
	int		i;

	res = malloc(sizeof(char) * (size + 1));
	i = 0;
	while (str[i])
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*res;
	int	i;

	i = 0;
	res = malloc((ac + 1) * sizeof(t_stock_str));
	if (!res)
		return (NULL);
	while (i < ac)
	{
		res[i].str = av[i];
		res[i].size = ft_strlen(av[i]);
		res[i].copy = ft_strcpy(av[i], res[i].size);
		i++;
	}
	res[i].str = 0;
	res[i].copy = 0;
	res[i].size = 0;
	return (res);
}
