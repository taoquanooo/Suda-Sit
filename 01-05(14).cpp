#include<stdio.h>
//输入三个整数a、b和c，将它们交换（即a的值给b，b的值给c，c的值给a）后输出a、b和c。
int main()
{
	int a,b,c,t;
	scanf("a=%d b=%d c=%d",&a,&b,&c);
	t=b;
	b=a;
	a=c;
	c=t;
	printf("a=%d b=%d c=%d",a,b,c);
}

