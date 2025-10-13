#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dst, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	dst_len;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	src_len = strlen(src);
	dst_len = strlen(dst);
	if (size <= src_len + dst_len)
		return (src_len);
	while (dst[i])
		i++;
	while (src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_len + src_len + 1);
}

int	main(void)
{
	char		dest[10] = "Hola";
	unsigned int	result = ft_strlcat(dest, " Barcelona", 10);

	if (result >= 10)
		printf("Need %zu bytes to get the complete string\n", result + 1);
	return (0);
}
