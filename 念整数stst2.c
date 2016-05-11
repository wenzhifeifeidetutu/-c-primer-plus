#include<stdio.h>
int main(void)
{
	int num=0;
	int a=0;
	
	scanf("%d", &num);
	if(num>0){
	while(num>0){
		a=num%10;
		num/=10;
		int i=0;
		//for(i=5; i>=0; i--){
		//	n[i]=a;
		}
	}
	int j=0;
	for(j=0; j<6; j++){
		if(n[j]){
		switch(n[j]){
				case 0: printf("ling");
					break;
				case 1: printf("yi");
					break;
				case 2: printf("er");
					break;
				case 3: printf("san");
					break;
				case 4: printf("si");
					break;
				case 5: printf("wu");
					break;
				case 6: printf("liu");
					break;
				case 7: printf("qi");
					break;
				case 8: printf("ba");
					break;
				default : printf("jiu");
			}
			printf("")
		}
	}
	
	}
}
