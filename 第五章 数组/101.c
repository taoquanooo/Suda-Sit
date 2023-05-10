#include <stdio.h>
#define N 10
//使用for循环实现: 输入10个成绩模拟10位选手的最后得分，
//输出各选手的名次（每个数据后跟一个空格）。
int main(){
	int i,j,a[N],c[N];
	for(i=0;i<N;i++){
		scanf("%d",&a[i]);
		c[i]=1;
	}
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(a[j]>a[i]){
				c[i]++;
			}
		}
	}
	for(i=0;i<N;i++){
		printf("%d ",c[i]);
	}
}
