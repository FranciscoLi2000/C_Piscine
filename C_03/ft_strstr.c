#include <stdio.h>
#include <string.h>

/* 第一种是最直观的双索引方法 */
char	*ft_strstr(char *str, char *to_find)
{
	/* 用变量i表示大字符串中当前检查的起始位置,用变量j表示子串中当前比较到的字符位置 */
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		/* 对于每个i,你让j从0开始,逐个比较str[i+j]和to_find[j],如果都匹配就说明找到了 */
		/* 这种方法的代码结构清晰,容易理解和调试 */
		j = 0;
		while (to_find[j] && str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
	}
	return (NULL);
}

/*
第二种方法是使用指针而不是索引。
你可以声明一个指针从str的开头开始扫描,对于每个位置,用另一组指针来进行匹配检查。
这种方法更接近C语言的惯用风格,而且能让你深刻理解指针的移动和比较。
*/

/*
第三种方法结合了两者,外层用指针遍历大字符串,内层用索引或临时指针来检查匹配。这通常是实践中最常见的折衷方案。
*/

