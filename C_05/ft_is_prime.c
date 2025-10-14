#include <stdio.h>

/* 找质数最有效的方法是埃拉托斯特尼筛法，它能高效地找出给定范围内的所有质数。
 * 对于判断单个数字是否为质数，最佳方法是优化的试除法，即只需要从2开始测试到该数字的平方根即可 */
int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	int	n;

	printf("Enter a number:\n");
	scanf("%i", &n);
	if (ft_is_prime(n))
		printf("%i is a prime number.\n", n);
	else
		printf("%i is NOT a prime number.\n", n);
	return (0);
}
