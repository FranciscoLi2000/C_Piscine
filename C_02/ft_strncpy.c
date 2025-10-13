#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	main(void)
{
	char	s1[] = "Hola Barcelona soy de Tianjin";
	char	s2[10];

	printf("%s\n", strncpy(s2, s1, 7));
	printf("%s\n", ft_strncpy(s2, s1, 7));
	return (0);
}
