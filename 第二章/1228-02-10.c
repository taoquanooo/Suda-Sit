#include <stdio.h>
#define PI 3.14
//输入一个整型的半径，输出周长和面积。要求使用符号常量，保留两位小数。
int main()
{
	int r;
	scanf("%d",&r);
	printf("%0.2f\n",2*PI*r);
	printf("%0.2f\n",PI*r*r);
	return 0;
}
