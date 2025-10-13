#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	s1[] = "Hola Barcelona";
	char	s2[] = "Hello Tianjin";

	printf("%s\n", strncat(s1, s2, 5));
	printf("%s\n", ft_strncat(s1, s2, 5));
	return (0);
}
