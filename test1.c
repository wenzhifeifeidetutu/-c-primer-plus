#include<stdio.h>
#define N 5

int main(void)
{
	int a[N][N];
	puts("������5x5�ľ���");
	int i, j;
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			scanf("%d", &a[i][j]);
		}
	}
	int sum1=0;
	int sum2=0;
	int sum3=1;
	int sum4=1;
	for(i=0; i<N; i++){
		sum1+=a[i][i];
		if(i%2 != 0){
			sum3*=a[i][i];
		}
	}
	for(i =0; i<N; i++){
		sum2+=a[i][N-1-i];
		if((N-1-i)%2 != 0){
			sum4*=a[i][N-1-i];
		}
	}
	printf("\n�����Խ����ϵĺͷֱ�Ϊ%d   %d", sum1, sum2);
	printf("\n���Խ����ϵ�ż��֮���ֱ�Ϊ%d       %d", sum3, sum4);
	
	return 0;
	
	
 } 
