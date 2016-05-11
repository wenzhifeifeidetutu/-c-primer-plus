#include<stdio.h>
int main(void)
{
	int utc=0;
	int bjt=0;
	scanf("%d", &bjt);
	int hour=bjt/100;
	int minute=bjt/10%10; 
	if ( hour<24 && minute<6) {
		if ( hour>=8 ) {
			utc=bjt-8*100;} 
		else {
			utc=2400+bjt-8*100;}
	printf("%d\n",utc);}
	else {};
	return 0;
	
}

