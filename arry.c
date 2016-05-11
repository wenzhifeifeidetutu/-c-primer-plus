#include<stdio.h>

int main()
{
	int array[5];
	int i;
	//位数组array的元素设值
	for(i = 0; i < 5; i++){
		array[i] = i;
	}
	//输出各数组的值
	for(i = 0; i< 5; i++){
		printf("%d\n", array[i]);
	}
	//输出个元素的地址 
	for(i = 0; i<5; i++){
		printf("&array[%d].......%p\n", i, &array[i]);
	} 
	return 0;
}
