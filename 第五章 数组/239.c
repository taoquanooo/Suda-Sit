#include<stdio.h>
#include<string.h>
//使用函数gets输入一个长度小于100的字符串，统计其中每个字母（不区分大小写）出现的次数。
int main() {
	int i;
	char a[100], b[26] = "";
	gets(a);
	for (i = 0; a[i]; i++) {
		if (a[i] >= 'a' && a[i] <= 'z')
			b[a[i] - 'a']++;
		else if (a[i] >= 'A' && a[i] <= 'Z')
			b[a[i] - 'A']++;
	}
	for (i = 0; i < 26; i++) {
		if (b[i])
			printf("%c:%d\n", i + 'A', b[i]);
	}
}
