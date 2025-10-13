#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return ((unsigned int)s1[i] - (unsigned int)s2[i]);
}

int	main(void)
{
	char    s1[100];
	char	s2[100];
	size_t	len;

	printf("Enter the first string\n");
	if (fgets(s1, 100, stdin) != NULL)
	{
		len = strlen(s1);
		if (len > 0 && s1[len - 1] == '\n')
			s1[len - 1] = '\0';
	}
	printf("Enter the second string\n");
	if (fgets(s2, 100, stdin) != NULL)
	{
		len = strlen(s2);
		if (len > 0 && s2[len - 1] == '\n')
			s2[len - 1] = '\0';
	}
	printf("%d\n", ft_strcmp(s1, s2));
	return (0);
}
