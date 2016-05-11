//模仿现实版的双色球彩票 也就是6+1彩票的开奖 采用单倍方式不考虑多倍 
#include<stdio.h>
#include<stdlib.h>   //rand（）srand()函数的宏产生随机数范围 
#include<time.h>   //time()函数定义种子 

int main(void)
{
	puts("★★★★★★★★★★★★★文华学院计应二班江操★★★★★★★★★★★★★");
	puts("                                                    【6+1双色球彩票系统】"); 
	int r[6];  //储存正确红球的数组 
	int b[1];  //储存正确蓝球的数组
	int r1[6]; //用户买的红球数的数组
	int b1[1]; //用户买的蓝球数的数组 
	//int red[32] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27. 28, 29, 30, 31, 32};
	//int blue[16] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
	//产生随机数红篮球 

	char h;
	int i,j, l, k;
	srand(time(NULL));
	for(i=0; i<6; i++){
		r[i] = 1 + rand()%(32);
	};
	//for(k=0; k<1; k++){
		b[1] = 1 + rand()%(16);
	//} 
	//购买界面
do{
	puts("请输入你想买的红球的号码：");
	puts("红球选范围1~32");
	for(j=0; j<6; j++){             //如果想买超过6个红球可以更改为宏定义 
		scanf("%d", &r1[j]);
	}
	puts("请输入蓝球号码：");
	puts("蓝球号码可选范围为1~16");
	for(l=0; l<1; l++){          //如果想买超过1个蓝球可以更改为宏定义 
		scanf("%d", &b1[l]);
	}
	
	//比对红篮球
	int countr = 0;
	int countb = 0;
	for(i=0; i<6; i++){
		for(j=0; j<6; j++){
			if(r1[j] ==r[i])  countr++;
		}
	}
	for(k=0; k<1; k++){
		for(j=0; j<1; j++){
			if(b1[j] ==b[k]) countb++;
		}
	}
	puts("本期的开奖号码为：");
	puts("红球："); 
	for(i=0; i<6; i++){
		printf("%4d", r[i]);
	} 
	puts("\n蓝球：");
	printf("%2d\n", b[1]);
	//判断得几等奖
	if(countr ==6 && countb == 1)  puts("恭喜你，中了一等奖！！！");
	if(countr ==5 && countb == 1 || countr == 6)  puts("恭喜你，中了二等奖！！！");
	if(countr ==4 && countb ==1 || countr == 5)  puts("恭喜你， 中了三等奖！！！");
	else puts("很遗憾，本次您未中奖"); 
	puts("是否再次购买?(y is yes , n is quit):");
	getchar();    //清楚空行..
	 
	scanf("%c", &h);
	}while( h == 'y');
	return 0;
	
} 


