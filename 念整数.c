#include<stdio.h>
int main(void)
{
	int num=0;
	int n1=100000;
	int a=0;
	
	scanf("%d", &num);
	while(num>0){
		if(num>0 && num>=n1){
			a=num/n1;
			switch(a){
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
		}
		num%=n1;
		n1/10;
	}
	return 0;	
}
