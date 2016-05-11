//3x5的数组,两个函数 1打印2加倍
#include<stdio.h>

void printarry(int (*a1)[5], int n1);
void addtwo(int (*a2)[5], int n2);

int main(void)
{
	int num[3][5]={
		{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}
	};
	printarry(num, 3);
	addtwo(num, 3);
	printarry(num, 3);	
	
}

void printarry(int (*a1)[5], int n1)
{
	int i =0;
	int j =0;
	for(i=0; i<n1; i++){
		for(j = 0; j<5; j++){
			printf("%5d", a1[i][j]);
		}
		printf("\n");
	}
}

void addtwo(int (*a2)[5], int n2)
{
	int i, j;
	for(i =0; i<n2; i++){
		for(j = 0; j<5; j++){
			a2[i][j]*=2;
		}
	}
}
