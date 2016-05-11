#include<stdio.h>
int main(void)
{
	int UTC=0;
	int BJT=0;
	scanf("%d", &BJT);
	int a, b, c,d;
	a=BJT%10;
	b=BJT%100/10;
	c=BJT/100%10;
	d=BJT/1000;
	if(d*10+c>=8 &&a!=0){
		printf("%d",BJT-800);
	}else if(d*10+c>=8 && a==0){
		printf("0");
	}else if(d*10+c<8){
		if(b!=0 || a!=0){
			printf("%d",(2400+((d*10+c)-8)*100)+b*10+a);
		}else if(b==0 && a==0){
			printf("%d", BJT-800+2400);
		}
	}
	return 0;
	
}
