//��ʾ�û�����3x5������
//1.����ÿ�����ݣ�2������ÿ�����ݵ�ƽ��ֵ 3. �����������ݵ�ƽ��ֵ 4�� �ҳ����ֵ 5 ��ӡ���н��
//20150528 -- wenzhi
//�겻�ܺͺ�����������   define ROW ��  colaver(double (*a1)[COL], ROW) 
#include<stdio.h>
#define ROW 3 
#define COL 5     //3rows 5 cols

void colaver(double (*a1)[COL], int row);
void allaver(double (*a2)[COL], int row);
double bigger(double (*a3)[COL], int row);
int main(void)
{
	double num[ROW][COL];
	
	int rows, cols;
	for(rows = 0; rows<ROW; rows++){
		printf("�������%d��������һ��%dÿ������5��Ԫ��:", rows+1, ROW);
		for(cols =0; cols<COL; cols++){
			scanf("%lf", &num[rows][cols]);	
		}
	}
	colaver(num, ROW);
	allaver(num, ROW);
	bigger(num, ROW);
	return 0;
		
}

void colaver(double (*a1)[COL], int row)
{
	int i, j;
	for(i =0; i<row; i++){
		double aver=0; 
		double sum=0;
		for(j = 0; j<COL; j++){
			sum +=a1[i][j];
		}
		aver=sum/COL;
		
		printf("\n��%d��������ƽ��ֵΪ%f", i+1, aver);	
	} 	
} 
void allaver(double (*a2)[COL], int row)
{
	int i, j;
	double sum=0;
	for(i=0; i<row; i++){
		for(j=0; j<COL; j++){
			sum+=a2[i][j];
		}
	}
	printf("\n�������ݵ�ƽ��ֵΪ:%f", sum/(COL*ROW));
}
double bigger(double (*a3)[COL], int row)
{
	int i, j;
	double temp=a3[0][0];
	for(i=0; i<row; i++){
		for(j=0; j<COL; j++){
			if(temp<a3[i][j]) temp=a3[i][j];
		}
	}
	printf("\n������Ϊ:%f", temp);
}
2
