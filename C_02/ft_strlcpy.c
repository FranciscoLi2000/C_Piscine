#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dst, char *src, unsigned int size)
{
	unsigned int	src_len;

	src_len = strlen(src);
	if (size <= src_len)
		return (src_len);
	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (size);
}

int	main(void)
{
	char		dest[10];
	unsigned int	result;

	result = ft_strlcpy(dest, "Hola Barcelona", 10);
	if (result >= 10)
		printf("Warning: string truncated\n");
	return (0);
}
