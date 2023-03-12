#include <stdio.h>
//使用scanf函数输入分钟，换算成用小时和分钟表示形式后用printf函数输出。
int main()
{
	int min;
	scanf("%d",&min);
	printf("%d小时%d分钟",min/60,min%60);
}
