/*
1. 定义程序的目标
2. 设计程序

3. 编写代码
4. 编译
5. 运行程序
6. 测试和调试

7. 维护和修改
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
