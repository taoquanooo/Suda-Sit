#include<stdio.h>
//使用for循环实现: 输入16个整数组成4*4的矩阵，输出矩阵的左下角元素之和。
#define N 4
int main() {
	int a[N][N], sum = 0, i, j;
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			scanf("%d", &a[i][j]);
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			if (i > j)
				sum += a[i][j];
	printf("%d", sum);
}
