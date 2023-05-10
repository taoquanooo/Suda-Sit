#include<stdio.h>
#include<string.h>
//使用函数scanf("%s",字符地址)输入三个字符串分别存入s1、s2和s3中，
//然后使用strcat函数将三个字符串拼接在一起存入s4中并使用printf("%s",字符地址)输出。
int main() {
	char s1[100], s2[100], s3[100], s4[300] = "";
	scanf("%s", s1);
	scanf("%s", s2);
	scanf("%s", s3);

	strcat (s4, s1);
	strcat (s4, s2);
	strcat (s4, s3);

	printf("%s", s4);
}
