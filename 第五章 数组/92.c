#include<stdio.h>
int main()
{

	int i,a[10],c1=0,c2=0;
	for(i=0;i<=9;i++)
		scanf("%d",&a[i]);
	for(i=0;i<=9;i++)
	{ if(a[i]%2==0)
     c2++;
   	 else
   	 c1++;		
		}       
 	 printf("奇数有%d个\n偶数有%d个",c1,c2);
	
}