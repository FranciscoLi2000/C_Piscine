#ifndef FT_DISPLAY_FILE_H
# define FT_DISPLAY_FILE_H

# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

# define SIZE 1024
# define ERR_MSG_1 "File name missing.\n"
# define ERR_MSG_2 "Too many arguments.\n"
# define ERR_MSG_3 "Cannot read file.\n"

void	ft_putchar(char c);
void	ft_putstr(char *str);

#endif
