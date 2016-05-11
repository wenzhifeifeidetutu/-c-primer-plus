#include <stdio.h>
int main(void)
{
	int n = 0, m = 0;
	int i = 0;
	
	int sum=0;
	int cnt =0;   //计数器 
	int x=2;
	//int num[201];  //数组 
	
	scanf("%d%d", &n, &m);
	while(cnt<200){
		int isprime=1;
		for(i = 2; i<x ;i++){
			if( x%i ==0 ){
				isprime=0;
				break;
			}
		}
		if(isprime ==1){
			cnt++;
			//num[cnt] = x;
		//printf("%d ", x);
			if(cnt>=n && cnt<=m){
				sum+=x;
			}
		} 
		x++;
	}
	//	int j=0;
//	for(j=n; j<=m-n; j++)  sum+=num[j];
	printf("%d", sum);
	return 0;
	
} 
