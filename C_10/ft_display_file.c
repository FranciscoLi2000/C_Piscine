#include "ft_display_file.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	fd;
	char	buf[SIZE];	/* I want to use a fixed-size array. */
	int	bytes_read;

	if (argc < 2)
	{
		ft_putstr(ERR_MSG_1);
		return (1);
	}
	if (argc > 2)
	{
		ft_putstr(ERR_MSG_2);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr(ERR_MSG_3);
		return (1);
	}
	while ((bytes_read = read(fd, buf, SIZE)) > 0)
		write(1, buf, bytes_read);
	close(fd);
	return (0);
}
