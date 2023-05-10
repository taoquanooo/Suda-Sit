#include<stdio.h>
//使用for循环输入10个整数存入一维数组a中，查找指定数是否存在（输出“存在”或“不存在”）。
#define N 10 
int main()
{

	int i,a[N],t=0,n;
	for(i=0;i<N;i++)
	scanf("%d",&a[i]);	
	scanf("%d",&n);
		
	for(i=0;i<N;i++)
		{	
		 if(n==a[i])
		  t=1;	 		 	 			      
 	 	}
	if(t==1)
		 printf("存在"); 
	 else
	 	 printf("不存在");	 
}
