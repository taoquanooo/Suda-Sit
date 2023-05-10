#include<stdio.h>
//使用for循环实现: 输入16个整数组成4*4的矩阵，输出矩阵的主对角线元素之和。
#define N 4
int main(){
	int i,j,a[N][N],sum=0;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			scanf("%d",&a[i][j]);
			if(i==j){
				sum=sum+a[i][j];
			}
		}
	}				
	printf("%d",sum);																																	
}
