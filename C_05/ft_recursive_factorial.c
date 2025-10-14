#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	/* 处理非法输入:负数没有阶乘 */
	if (nb < 0)
		return (0);
	/* 基准情况:0和1的阶乘都是1 这是递归的终止条件 */
	if (nb == 0 || nb == 1)
		return (1);
	/* 递归步骤:n! = n × (n-1)! 这里函数调用了自己,但是用的是更小的问题(nb-1) */
	return (nb * ft_recursive_factorial(nb - 1));
}

int	main(void)
{
	int	n;

	printf("Enter a number:\n");
	scanf("%i", &n);
	printf("Result: %i\n", ft_recursive_factorial(n));
	return (0);
}
