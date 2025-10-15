#include "ft_stock_str.h"

int	main(int argc, char **argv)
{
	t_stock_str	*tab;
	int	i;

	tab = ft_strs_to_tab(argc, argv);
	ft_show_tab(tab);
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (0);
}
