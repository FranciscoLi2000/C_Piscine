#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// 检查当前组合是否是最后一个（用于判断是否添加分隔符）
static int	is_last_combination(int arr[], int n)
{
	int	i;
	int	expected_value;

	i = 0;
	expected_value = 10 - n;  // 最后一个组合的第一个数字
	while (i < n)
	{
		if (arr[i] != expected_value + i)
			return (0);
		i++;
	}
	return (1);
}

// 打印数组中的组合，并在需要时添加分隔符
static void	print_combination(int arr[], int n, int is_last)
{
	int	i;
	
	i = 0;
	while (i < n)
	{
		ft_putchar(arr[i] + '0');  // 将数字转换为字符
		i++;
	}
	if (!is_last)  // 如果不是最后一个组合，添加分隔符
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

// 递归生成组合的核心函数
static void	generate_combinations(int arr[], int pos, int start, int n)
{
	int	i;

	// 递归终止条件：如果所有位置都填满了
	if (pos == n)
	{
		// 打印当前组合，并检查是否需要添加分隔符
		print_combination(arr, n, is_last_combination(arr, n));
		return ;  // 返回上一层递归
	}
	// 在当前位置尝试所有可能的数字
	// i的范围：从start开始，到能保证后续位置有足够数字可选为止
	i = start;
	while (i <= 10 - (n - pos))
	{
		arr[pos] = i;  // 在当前位置放入数字i
		// 递归处理下一个位置
		// 注意：下一个位置的起始数字是i+1（保证递增）
		generate_combinations(arr, pos + 1, i + 1, n);
		i++;  // 尝试下一个可能的数字
	}
}

// 主函数
void	ft_print_combn(int n)
{
	int	arr[10];

	if (n <= 0 || n >= 10)
		return ;

	// 从位置0开始，起始数字为0
	generate_combinations(arr, 0, 0, n);
}
