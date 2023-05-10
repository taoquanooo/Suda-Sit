#include<stdio.h>
#include<string.h>
//使用函数gets输入一个长度小于100的字符串，统计其中每个数字出现的次数。
int main() {
	int i;
	char a[100], b[10] = "";
	gets(a);
	for (i = 0; a[i]; i++) {
		if (a[i] >= '0' && a[i] <= '9')
			b[a[i] - '0']++;
	}
	for (i = 0; i < 10; i++) {
		if (b[i])
			printf("%d:%d\n", i, b[i]);
	}
}
