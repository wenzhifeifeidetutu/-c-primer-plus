#include"stdio.h"
void main()
{
  int a[7],b[7];
  int i,j,k=0;
  printf("请设置中奖号码为(中奖号码有7组数)\n");
  for(i=0;i<7;i++)
	  scanf("%d",&a[i]);
  while(1995)
  {k=0;
  printf("请输入你猜测的号码为\n");
  for(i=0;i<7;i++)
	  scanf("%d",&b[i]);
  for(i=0;i<6;i++)
  {
	  if(a[i]==b[i])
		  k++;
  }
	  if(k==6)
	  {   
		  if(a[6]==b[6])
		  { printf("恭喜你中了特等奖\n"); }
		  else
		  { printf("恭喜你中了一等奖\n"); }
	  }
     else if(k==5)
		 { 
			 if((a[0]==b[0]&&a[5]!=b[5])
			 ||(a[0]!=b[0]&&a[5]==b[5]))
		     printf("恭喜你中了二等奖\n");}
	 else if(k==4)
		 {
	         if((a[0]==b[0]&&(a[4]!=b[4]&&a[5]!=b[5]))
			 ||(a[1]==b[1]&&(a[0]!=b[0]&&a[5]!=b[5]))
			 ||(a[2]==b[2]&&(a[0]!=b[0]&&a[1]!=b[1])))
		  { printf("恭喜你中了三等奖\n"); }
		 }		 

      else printf("很遗憾，你没有中奖\n");
       
  }
}