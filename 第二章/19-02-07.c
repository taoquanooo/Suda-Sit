#include <stdio.h>
//输入一个英文字母，分别输出其前面一个和后面一个英文字母。（要求使用scanf和printf函数实现输入输出）
int main()
{
	char ch1;
	scanf("%c",&ch1);
	printf("前面字母为%c",ch1-1);
	printf("\n");
	printf("后面字母为%c",ch1+1);
	return 0;
}
