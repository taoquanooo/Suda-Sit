#include<stdio.h>
//使用for循环输入10个整数存入一维数组a中，输出它们的平均值(保留两位小数)、
//以及大于平均值的数据（每个数据后跟一个空格）及个数、小于平均值的数据（每个数据后跟一个空格）及个数。
#define N 10
int main()
{
	int a[N],i,big=0,sum=0,small=0;
	double avg;
	for(i=0;i<N;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<N;i++)
	sum=sum+a[i];
	avg=sum/10.0;
	printf("平均值=%.2f\n",avg);
	
	printf("大于平均值的数据有");
	for(i=0;i<N;i++)	
	if(a[i]>avg)	
	{
			big++;
		printf("%d ",a[i]);		
	}				
	printf("共%d个\n",big);
	
	printf("小于平均值的数据有");
	for(i=0;i<N;i++)	
	if(a[i]<avg)	
	{
			small++;
		printf("%d ",a[i]);		
	}				
		printf("共%d个",small);		
}
