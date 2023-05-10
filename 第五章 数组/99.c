#include <stdio.h>
//使用for循环实现: 输入10个整数存入一维数组a中，
//将数组中的数据循环左移一个位置后输出，每个数据后跟一个空格。
#define N 10
int main(){
	int a[N],i,x1=1,x2=1,x3,c=0;
	for(i=0;i<N;i++){
		scanf("%d",&a[i]);
	}
	a[N]=a[0];
	for(i=0;i<N-1;i++){
		a[i]=a[i+1];
		printf("%d ",a[i]);
	}
	printf("%d",a[N]);
}
