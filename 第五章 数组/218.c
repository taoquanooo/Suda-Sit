#include <stdio.h>
#define N 10
//使用for循环实现: 输入10个整数存入一维数组a中，
//将数组中的元素升序排序后输出(每个数据后跟一个空格)。
int main(){
	int i, j, temp,a[N];
	for (i = 0; i < N; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < N-1; i++) {
		for (j = 0; j < N-1 - i; j++) {
			if (a[j] > a[j+1]) {
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	for (i = 0; i < N; i++) {
		printf("%d ", a[i]);
	}
}
