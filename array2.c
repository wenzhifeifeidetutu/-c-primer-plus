#include<stdio.h>
 
 int main()
 {
 	int array[5];
 	int *p;
 	int i;
 	
 	//给数组array的个元素设定值
	 for(i = 0; i< 5; i++){
	 	array[i] = i;
	 } 
	// 输出数组个元素的值（指针版）
	for (p = &array[0]; p != &array[5]; p++){
		printf("%d\n", *p);
	} 
	return 0;
 }
