#include<stdio.h>
//输入长方形的长和宽（均为实数），输出其周长和面积。
int main()
{
	float a,b;
	scanf("%f%f",&a,&b);
	printf("周长=%f\n",a+b+a+b);
	printf("面积=%f",a*b);
}

