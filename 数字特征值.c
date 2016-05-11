#include<stdio.h>
#include<math.h>
int main(void)
{
	int num=0;
	int n[7];
	scanf("%d", &num);
	int k =0;
	for(k=0; k<7; k++){
		if(num>=(int)pow(10, k)) n[k]=num%(int)pow(10, k+1)/(int)pow(10, k);
	}
/*	n[0]=num%10;
	n[1]=num%100/10;
	n[2]=num%1000/100;
	n[3]=num%10000/1000;
	n[4]=num%100000/10000;
	n[5]=num/100000;
	int h=0;
	for(h=0; h<6; h++){
		printf("%d", n[h]);
		printf("");
	}
*/
	int sum=0;
	int i, j;
	for( i=6,j=64; i>=0, j>=1; i--, j/=2){
		if(n[i] !=0 && (n[i]%2) ==((i+1)%2) ){
			sum+=j;
		}
	}
	printf("%d", sum);
	return 0;
 } 
