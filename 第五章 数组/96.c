#include<stdio.h>
//使用for循环实现: 将裴波那契数列的前12项存入一维数组a中并以4个一行的形式输出，
//每个数据占4个位置且右对齐。
#define N 12 
int main()
{
	int i,a[N],x1=1,x2=1,x3,n,c=0;						
	for(i=0;i<2;i++)
		{
		a[i]=x1;
		printf("%4d",a[i]);
		c++;
		}	
	
	for(i=2;i<N;i++)
		{		
		x3=x1+x2;
		a[i]=x3;
		x1=x2;
		x2=x3;								
		printf("%4d",a[i]); 
		c++	;
		 if(c%4==0)
	 printf("\n");
}					 		 	 			      
 	 	}
