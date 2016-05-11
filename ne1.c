　#include"stdio.h"
　void main()
{　　int i,j,k;
for(i=1;i<=10;i++)
{　　if(i==1||i==10)　
　for(j=1;j<=15;j++)　
　printf("*");　　
else　　for(k=1;k<=20;k++)　
　if(k==8)　
　printf("*");　
　else　　printf(" ");　
　printf("\n");}　　
printf("\n");　　
printf("\n");　　
printf(" ************ ************\n");　　printf(" ************** **************\n");　　
printf(" **************** ****************\n");　
　printf(" ****************** ******************\n");　　for(i=20;i>0;i--)　
　{for(j=0;j<=20-i;j++)　
　printf(" ");　
　for(k=1;k<=2*i　-1;k++)　
　printf("*");　
　printf("\n");}　
　printf("\n");　
　printf("\n");　
　printf("\n");　
　printf("\n");　　
for(j=1;j<=10;j++)
　　if(j<=9)
　{ for(i=1;i<=15;i++)
　　if(i==1)
　printf("*");
　else if(i==15)
　printf("*\n");
　else printf(" ");　　}
　else　　for(k=1;k<=15;k++)
　printf("*");
　printf("\n");