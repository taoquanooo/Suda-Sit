#include<stdio.h>
//使用for循环实现: 输入10个整数存入一维数组a中，将数组中的数据循环右移一个位置后输出（每个数据后跟一个空格）。
int main() {
    int a[10],i,x;
    for( i= 0; i < 10; i++)
scanf("%d",&a[i]);
for( i= 0; i < 10; i++) 
{
     x = a[9];
    a[9] = a[i];
    a[i] = x;
    printf("%d ",a[i]);
}
    }
