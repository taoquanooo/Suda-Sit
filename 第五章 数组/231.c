#include<stdio.h>
#define N 3
int main() {
	int a[N][N], t, i, j;
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			scanf("%d", &a[i][j]);
//	for(i=0;i<N;i++){
//		for(j=0;j<N;j++){
//			printf("%d ",a[j][i]);
//			c++;
//			if(c%3==0){
//				printf("\n");
//			}
//		}
//	}
	for (i = 0; i < N; i++) {
		for (j = i; j < N; j++) {
			t = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = t;
		}
	}
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++)
			printf("%d ", a[i][j]);
		printf("\n"	);
	}
}
