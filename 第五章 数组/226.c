#include<stdio.h>
//使用for循环实现: 输入16个整数组成4*4的矩阵，输出最小值及其所在位置。若有多个最小值则报告首次出现的位置。
#define N 4
int main() {
	int a[N][N], mini, minj, i, j;
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			scanf("%d", &a[i][j]);
	mini = minj = 0;
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			if (a[i][j] < a[mini][minj]) {
				mini = i;
				minj = j;
			}
	printf("第%d行第%d列\n%d", mini, minj, a[mini][minj]);
}
