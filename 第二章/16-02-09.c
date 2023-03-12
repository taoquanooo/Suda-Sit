#include <stdio.h>
//输入一个四位整数，输出其个位、十位、百位和千位（要求使用scanf和printf函数实现输入输出）
int main()
{
	int d1;
	scanf("%d",&d1);
	printf("个位=%d\n",d1%10);
	printf("十位=%d\n",d1%100/10);
	printf("百位=%d\n",d1%1000/100);
	printf("千位=%d\n",d1/1000);
	return 0;
}
//a%10,a%100/10,a%1000/100,a/1000
