#include<stdio.h>
//定义一个枚举类型WEEKDAY，用0～6代表Sunday(星期日)～Saturday(星期六)。
//编写程序，从键盘输入0～6的任意一个整数，输出对应的星期几。
enum WEEKDAY{sun,mon,tue,wed,thu,fri,sat
}; 
int main()
{
	int i;
	scanf("%d",&i);
	switch(i)
	{
		case sun:printf("Sunday");;break;
		case mon:printf("Monday");break;
		case tue:printf("Tuesday");break;
		case wed:printf("Wednesday");break;
		case thu:printf("Thursday");break;
		case fri:printf("Friday");break;
		case sat:printf("Saturday");break;
	}
}
