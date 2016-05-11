#include <stdio.h>
int main (void)
{
float i;

printf("please input some number:");
scanf("%f", &i);
printf(" The input is %f or %.1e", i, i);
printf("\nThe input is %+.3f or %.3e", i, i);
return 0;
}