//提示用户输入3x5的数集
//1.储存每个数据，2，计算每个数据的平均值 3. 计算所有数据的平均值 4， 找出最大值 5 打印所有结果
//20150528 -- wenzhi
//宏不能和函数参数重名   define ROW 和  colaver(double (*a1)[COL], ROW) 
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
		printf("请输入第%d个数集，一共%d每个数集5个元素:", rows+1, ROW);
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
		
		printf("\n第%d个数集的平均值为%f", i+1, aver);	
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
	printf("\n所有数据的平均值为:%f", sum/(COL*ROW));
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
	printf("\n最大的数为:%f", temp);
}
2
