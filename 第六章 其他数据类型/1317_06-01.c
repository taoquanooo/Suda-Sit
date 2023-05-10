#include <stdio.h>
//定义一个枚举类型WEEKDAY，用1～7代表Sunday(星期日)～Saturday(星期六)。编写程序，从键盘输入1～7的任意一个整数，输出对应的星期几。
enum WEEKDAY{Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday 
};
int main()
{
	int i;
	scanf("%d",&i);
	switch(i)
	{
		case 1:
			printf("Sunday");
			break;
		case 2:
			printf("Monday");
			break;
		case 3:
			printf("Tuesday");
			break;
		case 4:
			printf("Wednesday");
			break;
		case 5:
			printf("Thursday");
			break;
		case 6:
			printf("Friday");
			break;
		case 7:
			printf("Saturday");
			break;
	 } 
}
