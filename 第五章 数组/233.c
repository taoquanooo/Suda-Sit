#include<stdio.h>
#include<string.h>
//使用函数scanf("%s",字符地址)输入一个长度小于100的字符串，
//将所有的大写字母转换为小写字母，小写字母转换为大写字母，
//其他字符不变，最后使用printf("%s",字符地址)输出。
int main() {
	char str[100], i, j;
	scanf("%s", str);

	for (i = 0; str[i]; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	printf("%s", str);
}
