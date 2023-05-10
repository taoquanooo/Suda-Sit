#include<stdio.h>
#include<string.h>
//使用函数gets输入一个长度小于100的字符串，
//将其中所有的数字组成一个整数后输出（若没有数字则输出0）。
int main() {
	int i, j = 0;
	char a[100], b[100] = "";
	gets(a);
	for (i = 0; a[i]; i++) {
		if (a[i] >= '0' && a[i] <= '9') {
			b[j] = a[i];
			j++;
		}
	}
	if (j == 0)
		printf("0");
	printf("%s", b);
}
