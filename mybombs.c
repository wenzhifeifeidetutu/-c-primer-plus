//bombs ɨ�� 9x9
//Author:wenzhi  2015 11 18
#include<stdio.h>
#include<stdlib.h>   // srand() and rand()  ��������� 
#include<time.h>     //time()


void makebomb(char a[][10]);
void printfjiemian(char b[][10]);
char countbomb(int a, int b, char mine[][10] );

int main(void)
{
	char mine[10][10];        //���� ��ֻ����Ȧ��һ��9x9��ɨ�׿����Ż��㷨 
	char jiemian[10][10];   // 
	int i;
	int j;
	int flag=1;  //��Ϸ�Ƿ�����ı�־ 
	for(i=0; i<10; i++){
		for(j=0; j< 10; j++){
			mine[i][j]='*';
			jiemian[i][j]='*';
		}
		printf("\n");
	}                                             // ��ʼ���ױ� 
	printf("           **************************         \n");
	printf("           ***********ɨ��***********         \n");
	printf("*******         author:wenzhi         ********\n");
	printf("******xΪ�ף���������������Χ�м�����*********\n");
	printf("~~~~~~~~~~~~~~~~~9x9һ����ʮ����~~~~~~~~~~~~~~~~"); 
	makebomb(mine);
	printfjiemian(jiemian);
	printf("����������ɨ������:x and y\n");
	int x, y;                                     //���� 
	scanf("%d%d", &x, &y);
	while(flag){
	
		while((x<1 || x>9)||(y<1 || y>9)){
			printf("����������겻��������������:\n");
			scanf("%d%d", &x, &y);
		}
		jiemian[x][y] = countbomb(x, y, mine);              // ���� ���޸Ľ�����ʾ�����ж����� 
		if(mine[x][y] != 'x'){                              //xΪ����oΪ���� 
			printfjiemian(jiemian);
			printf("\n����������ɨ������:x and y\n");
			scanf("%d%d", &x,&y); 
		}else{
				printf("GAME OVER");
				printfjiemian(mine);
				flag=0;                    //��Ϸ���� 
			}
	
	}
	return 0; 
} 

void makebomb(char a[][10])
{
	int bomb=10;   //һ��ʮ���� 
	int i;
	int j, k;
	
	srand((int)time(0));
	while(bomb>0){
		j=(1+(int)rand()%9);
		k=(1+(int)rand()%9);      //ֻ��1~9������ 
		a[j][k]='x';
		bomb--;
	}

}
void printfjiemian(char b[][10])
{
	int i, j;
	for(i =1; i<10; i++){
		for(j =1; j< 10; j++){                       //��ӡֻ��ӡ1~9 
			printf("%c ", b[i][j]);
		}
		printf("\n");
	}
}
char countbomb(int a, int b, char mine[][10] )
{
	char countbomb='0';
	if( mine[a-1][b-1] =='x'){
		countbomb++;
	}
	if(	mine[a-1][b] =='x'){
		countbomb++;
	}
	if(mine[a-1][b+1] =='x'){
		countbomb++;
	}
	if(mine[a][b-1] =='x'){
		countbomb++;
	}
	if(mine[a][b+1] =='x'){
		countbomb++;
	}
	if(mine[a+1][b-1] =='x'){
		countbomb++;
	}
	if(mine[a+1][b] =='x'){
		
	}
	if(mine[a+1][b+1]=='x'){
		countbomb++;
	}
	
	return countbomb;
}
