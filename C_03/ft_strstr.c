
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	check;

	if (to_find == '\0')
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			i = 0;
			check = 0;
			while (to_find[i] != '\0')
			{
				if (str[i] != to_find[i])
					check = 1;
				i++;
			}
			if (check == 0)
				return (str);
		}
		str++;
	}
	return (0);
}
