//利用变长数组来解决此问题12
#include<stdio.h>

void colaver(int n, int m, double a1[n][m]);
int main(void)
{
	int n, m;      //n,m分别为变长数组的的两个值
	printf("请输入两个数组的长度ROW is %d col is %d ", n, m);
	double num[n][m];
	int rows, cols;
	for(rows = 0; rows<n; rows++){
		printf("请输入第%d个数集，一共%d, 每个数集%d个元素:", rows+1, n, m);
		for(cols =0; cols<m; cols++){
			scanf("%lf", &num[rows][cols]);	
		}
	}
	colaver(n, m, num);
	
 } 
 
 
void colaver(int n, int m, double a1[n][m])
{
		int i, j;
	for(i =0; i<n; i++){
		double aver=0; 
		double sum=0;
		for(j = 0; j<m; j++){
			sum +=a1[i][j];
		}
		aver=sum/m;
		
		printf("\n第%d个数集的平均值为%f", i+1, aver);	
	} 	
}
