//定义以下类型：
//enum SEX{
//	GIRL, BOY
//};
//struct SStudent{
//	int num;          //学号 
//	char name[20];    //姓名
//	enum SEX sex;          //性别
//};
//struct SStudentEx
//{
//	struct SStudent base;
//	float usual;      //平时成绩
//	float mid;        //期中成绩
//	float final;      //期末成绩
//	float total;     //期末成绩 
//};
//编写程序，输入n(n<10)，再输入n个学生的某课程的平时、期中和期末成绩，
//然后按平时占10%，期中占20%，期末占70%的比例计算出这些学生的学期成绩，按分数从高低排序输出学生的姓名。
#include<stdio.h>
#include<string.h>
enum SEX {
	GIRL, BOY
};
struct SStudent {
	int num;
	char name[20];
	enum SEX sex;
};
struct SStudentEx {
	struct SStudent base;
	int usual;
	int mid;
	int final;
	double total;
} a[20];

struct XXX {
	char c[20];
} b;

int main() {
	int n, i, j;
	double max;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d %s %s %d %d %d", &a[i].base.num, &a[i].base.name, &a[i].base.sex, &a[i].usual, &a[i].mid, &a[i].final);
		a[i].total = a[i].usual * .1 + a[i].mid * .2 + a[i].final * .7;
	}
	for (j = 0; j < n - 1; j++)
		for (i = n - j; i > 0; i--) {
			if (a[i].total > a[i - 1].total) {
				max = a[i].total;
				a[i].total = a[i - 1].total;
				a[i - 1].total = max;
				strcpy(b.c, a[i].base.name);
				strcpy(a[i].base.name, a[i - 1].base.name);
				strcpy(a[i - 1].base.name, b.c);
			}
		}
	for (i = 0; i < n; i++)
		printf("%s ", a[i].base.name);
}
