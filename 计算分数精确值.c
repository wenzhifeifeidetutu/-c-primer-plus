//自己确定精度 
#include<stdio.h>
int main()
{	
	
	int re[200];
	int count = 200;
	int a, b;
	int i;
	scanf("%d/%d", &a, &b);
	if(a >= 10 && a < b && b<100){
		for(i=0; i<=count; i++){
			re[i] = a*10/b;
			a= ((a*10)%b);
		}
		printf("\n结果是:0.");
	
		for(i=0; i<count; i++){
			printf("%d", re[i]);
		}
		printf("\n");
	}
	return 0;
	
}
