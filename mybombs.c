//bombs 扫雷 9x9
//Author:wenzhi  2015 11 18
#include<stdio.h>
#include<stdlib.h>   // srand() and rand()  随机出现雷 
#include<time.h>     //time()


void makebomb(char a[][10]);
void printfjiemian(char b[][10]);
char countbomb(int a, int b, char mine[][10] );

int main(void)
{
	char mine[10][10];        //但是 我只做内圈的一个9x9的扫雷可以优化算法 
	char jiemian[10][10];   // 
	int i;
	int j;
	int flag=1;  //游戏是否结束的标志 
	for(i=0; i<10; i++){
		for(j=0; j< 10; j++){
			mine[i][j]='*';
			jiemian[i][j]='*';
		}
		printf("\n");
	}                                             // 初始化雷表 
	printf("           **************************         \n");
	printf("           ***********扫雷***********         \n");
	printf("*******         author:wenzhi         ********\n");
	printf("******x为雷，出现数字则是周围有几个雷*********\n");
	printf("~~~~~~~~~~~~~~~~~9x9一共有十个雷~~~~~~~~~~~~~~~~"); 
	makebomb(mine);
	printfjiemian(jiemian);
	printf("请输入你想扫的坐标:x and y\n");
	int x, y;                                     //坐标 
	scanf("%d%d", &x, &y);
	while(flag){
	
		while((x<1 || x>9)||(y<1 || y>9)){
			printf("你输入的坐标不符合请重新输入:\n");
			scanf("%d%d", &x, &y);
		}
		jiemian[x][y] = countbomb(x, y, mine);              // 数雷 并修改界面显示这里有多少雷 
		if(mine[x][y] != 'x'){                              //x为有雷o为无雷 
			printfjiemian(jiemian);
			printf("\n请输入你想扫的坐标:x and y\n");
			scanf("%d%d", &x,&y); 
		}else{
				printf("GAME OVER");
				printfjiemian(mine);
				flag=0;                    //游戏结束 
			}
	
	}
	return 0; 
} 

void makebomb(char a[][10])
{
	int bomb=10;   //一共十个雷 
	int i;
	int j, k;
	
	srand((int)time(0));
	while(bomb>0){
		j=(1+(int)rand()%9);
		k=(1+(int)rand()%9);      //只在1~9产生雷 
		a[j][k]='x';
		bomb--;
	}

}
void printfjiemian(char b[][10])
{
	int i, j;
	for(i =1; i<10; i++){
		for(j =1; j< 10; j++){                       //打印只打印1~9 
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
