#include"stdio.h"
int main()
{int ok(int a);
  int n;
  for(n=1;;n++)
  {
     if(ok(n))
		break;
  }
  printf("桃子至少有 %d 个",n);
}
int ok(int a)
{
  int i;
  for(i=0;i<5;i++)
  {
    if(a%5!=1)
		return 0;
     a=a/5*4;		
  }
   return 1;
   return 0;

  
}
