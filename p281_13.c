//���ñ䳤���������������12
#include<stdio.h>

void colaver(int n, int m, double a1[n][m]);
int main(void)
{
	int n, m;      //n,m�ֱ�Ϊ�䳤����ĵ�����ֵ
	printf("��������������ĳ���ROW is %d col is %d ", n, m);
	double num[n][m];
	int rows, cols;
	for(rows = 0; rows<n; rows++){
		printf("�������%d��������һ��%d, ÿ������%d��Ԫ��:", rows+1, n, m);
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
		
		printf("\n��%d��������ƽ��ֵΪ%f", i+1, aver);	
	} 	
}
