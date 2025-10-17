# 程序名字
NAME		= ft_display_file

# 源文件列表
SRC		= ft_display_file.c

# 从源文件生成目标文件名（.c改成.o）
OBJS		= ${SRC:.c=.o}

# 定义includes目录路径
INC		= includes/

# 定义include编译标志——这是关键！
INCS		= -I ${INC}

# 清理工具和编译器配置
RM		= rm -f
CC		= cc
CFLAGS		= -Wall -Wextra -Werror ${INCS}
# 默认目标：构建可执行程序
all: ${NAME}

# 隐含规则：从.c文件编译到.o文件
.c.o:
	${CC} ${CFLAGS} -c $< -o $@

# 链接规则：从.o文件链接到最终的可执行程序
${NAME}: ${OBJS}
	${CC} ${CFLAGS} -o ${NAME} ${OBJS}

# 清理目标文件
clean:
	${RM} ${OBJS}

# 完全清理（包括可执行程序）
fclean: clean
	${RM} ${NAME}

# 重新构建
re: fclean all

# 声明这些不是实际的文件，而是伪目标
.PHONY: all clean fclean re
