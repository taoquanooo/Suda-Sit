//定义一个结构体类型STUDENT，包含5个成员：学号、姓名、数学、英语和计算机
//（学号和姓名定义为字符数组类型，三门成绩定义为整型）。
//定义一个结构体类型数组存放3位学生的信息，依次输入他们的学号、姓名、数学、英语
//和计算机成绩，以列表形式输出3位学生的学号、姓名、数学、英语、计算机、平均成绩
//(保留两位小数)。
#include <stdio.h>
#include <math.h>
struct SPoint {
	double x;
	double y;
};
int main() {
	int i, n;
	double j = 0.0;
	scanf("%d", &n);
	struct SPoint sp[n];
	for (i = 0; i < n; i++) {
		scanf("%lf %lf", &sp[i].x, &sp[i].y);
	}
	for (i = 0; i < n - 1; i++) {
		j += sqrt((sp[i].x - sp[i + 1].x) * (sp[i].x - sp[i + 1].x) + (sp[i].y - sp[i + 1].y) * (sp[i].y - sp[i + 1].y));
	}
	printf("%.2lf", j);
}
