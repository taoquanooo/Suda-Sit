#include<stdio.h>
//输入3*3矩阵以及行号a和b，将矩阵a行与b行交换后输出。
#define N 3
int main() {
	int a[N][N], i, j, x, y, t;
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			scanf("%d", &a[i][j]);
	scanf("%d%d", &x, &y);
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			if (i == x) {
				t = a[x][j];
				a[x][j] = a[y][j];
				a[y][j] = t;
			}
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
}
