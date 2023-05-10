#include<stdio.h>
#include<string.h>
//使用函数scanf("%s",字符地址)输入一个长度小于100的字符串，
//统计其中大写字母、小写字母、数字以及其他字符的个数。
int main() {
	char s1[100];
	int big = 0, sm = 0, di = 0, el = 0, i, j;
	scanf("%s", s1);

	for (i = 0; s1[i]; i++) {
		if (s1[i] >= 'A' && s1[i] <= 'Z')
			big++;
		else if (s1[i] >= 'a' && s1[i] <= 'z')
			sm++;
		else if (s1[i] >= '0' && s1[i] <= '9')
			di++;
		else
			el++;
	}

	printf("大写%d个\n小写%d个\n数字%d个\n其他%d个", big, sm, di, el);
}
