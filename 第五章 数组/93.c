#include<stdio.h>
//使用for循环输入10个整数存入一维数组a中，找出其中的最大数及其下标位置、最小数及其下标位置。若存在相同的则报告首次出现的最大数或最小数。
#define N 10 
int main()
{

	int i,a[N],max,min;
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
		max=0;
		min=0;
	for(i=1;i<N;i++)
	{
	
	 if(a[i]>a[max])
	max=i;
	 
    if(a[i]<a[min])
	min=i;		
	  
 	 }
	  printf("最大数=%d 下标=%d\n",a[max],max);	
	   printf("最小数=%d 下标=%d",a[min],min);	
}
