#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str);

int	main(int argc, char **argv)
{
	(void)argc;
	ft_putstr(argv[0]);
	ft_putchar('\n');
	return (0);
}
