#include<stdio.h>
 
 int main()
 {
 	int array[5];
 	int *p;
 	int i;
 	
 	//������array�ĸ�Ԫ���趨ֵ
	 for(i = 0; i< 5; i++){
	 	array[i] = i;
	 } 
	// ��������Ԫ�ص�ֵ��ָ��棩
	for (p = &array[0]; p != &array[5]; p++){
		printf("%d\n", *p);
	} 
	return 0;
 }
