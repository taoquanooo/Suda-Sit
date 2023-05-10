#include<stdio.h>
#include<string.h>
//使用函数gets输入一个长度小于100的字符串，判断它是否是回文，
//若是则输出“是回文”，否则输出“不是回文”。所谓回文即正序和逆序内容相同的字符串。
//提示：先读入字符串str1，然后将str1的逆序字符串存入str2，
//最后使用strcmp函数实现两个字符串str1和str2的比较，若两个字符串相等则为回文。
int main() {
	int i, j = 0;
	char a[100], b[100] = "";
	gets(a);
	for (i = 0; a[i]; i++)
		j = i;
	for (i = 0; a[i]; i++)
		b[j - i] = a[i];
	if (strcmp(a, b))
		printf("不是回文");
	else
		printf("是回文");
}
