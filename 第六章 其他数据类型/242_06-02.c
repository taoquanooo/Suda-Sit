//定义一个结构体类型STUDENT，包含5个成员：学号、姓名、数学、英语和计算机（学号和姓名定义为字符数组类型，
//三门成绩定义为整型）。定义一个结构体类型数组存放3位学生的信息，依次输入他们的学号、姓名、数学、英语和计算机成绩，
//以列表形式输出3位学生的学号、姓名、数学、英语、计算机、平均成绩(保留两位小数)。
#include<stdio.h>
struct STUDENT
{
	char num[100];
	char name [100];
	int math;
	int eng;
	int com;
	float ave;
}stu[3];
int main()
{
	int i;
	for(i=0;i<3;i++)
	{
		scanf("%s%s%d%d%d",stu[i].num,stu[i].name,&stu[i].math,&stu[i].eng,&stu[i].com);
		stu[i].ave=(stu[i].math+stu[i].eng+stu[i].com)/3.0;
	}
	for(i=0;i<3;i++)
	printf("%s\t%s\t%d\t%d\t%d\t%.2f\n",stu[i].num,stu[i].name,stu[i].math,stu[i].eng,stu[i].com,stu[i].ave);
}