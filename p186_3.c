#include<stdio.h>
int main(void)
{
	int num, i_even = 0, sum_even =0, i_obb =0, sum_obb =0;
	printf("please input numbers (0 to quit!)");
	while(1){
	scanf("%d", &num);
	if(num ==0) break;
	if(num %2 == 0){
	i_even++;
	sum_even +=num;
	}
	else
	{
	i_obb++;
	sum_obb+=num;
	}
	}
	printf("even number's count: %d\n", i_even);
	printf("obb number's count: %d\n", i_obb);
	printf("even number's average:%d\n", sum_even/i_even);
	printf("obb number's average:%d\n", sum_obb/i_obb);
	return 0;
}