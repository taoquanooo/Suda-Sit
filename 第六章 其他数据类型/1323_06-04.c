//定义以下类型：
//enum SEX{
//	GIRL, BOY
//};
//struct SStudent{
//	char num[15];      //学号 
//	char name[20];    //姓名
//	SEX sex;          //性别
//};
//struct SStudentEx{
//	struct SStudent base;
//	char Phone[20];
//};
//编写程序，输入n(n<10)，再输入n个学生的通讯录，然后输入一个学生的姓名，
//输出该学生的电话号码。
#include<stdio.h>
#include<string.h>
enum SEX {
	GIRL, BOY
};
struct SStudent {
	char num[15];
	char name[20];
	enum SEX sex[20];
};
struct SStudentEx {
	struct SStudent base;
	char Phone[20];
} a[20];

struct XXX {
	char c[20];
} b;

int main() {
	int n, i;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%s %s %s %s", &a[i].base.num, &a[i].base.name, &a[i].base.sex, &a[i].Phone);
	}
	scanf("%s", &b.c);
	for (i = 0; i < n; i++)
		if (strcmp(b.c, a[i].base.name) == 0)
			printf("%s", a[i].Phone);
}
