#include <stdio.h>
//输入一个英文字母，分别输出其前面一个和后面一个英文字母。（要求使用getchar和putchar函数实现输入输出一个字母）
int main()
{
	char ch1;
	ch1 = getchar();
	printf("前面字母为");
	putchar(ch1-1);
	printf("\n");
	printf("后面字母为");
	putchar(ch1+1);
	return 0;
}
