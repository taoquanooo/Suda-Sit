#include<stdio.h>
//输入两个整数a和b，将它们交换（即a的值给b，b的值给a）后输出a和b。
int main()
{
	int a,b,t;
	scanf("a=%d b=%d",&a,&b);
	t=a;
	a=b;
	b=t;
	printf("a=%d b=%d",a,b);
}

