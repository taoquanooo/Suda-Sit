#include<stdio.h>
#include<string.h>
//使用函数gets输入一个长度小于100的字符串，统计其中英文字母、
//数字以及其他字符的个数。
int main() {
	char s1[100];
	int en = 0, sm = 0, di = 0, el = 0, i, j;
	gets(s1);

	for (i = 0; s1[i]; i++) {
		if (s1[i] >= 'A' && s1[i] <= 'z')
			en++;
		else if (s1[i] >= '0' && s1[i] <= '9')
			di++;
		else
			el++;
	}

	printf("字母%d个\n数字%d个\n其他%d个", en, di, el);
}
