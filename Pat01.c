/*
PAT 01
����KK��������ɵ�����{ N_1N
?1
?? , N_2N
?2
?? , ..., N_KN
?K
??  }�����������С�������Ϊ{ N_iN
?i
?? , N_{i+1}N
?i+1
?? , ..., N_jN
?j
??  }������ 1 \le i \le j \le K1��i��j��K����������к͡��򱻶���Ϊ������������Ԫ�صĺ�������ߡ������������{ -2, 11, -4, 13, -5, -2 }������������{ 11, -4, 13 }�����ĺ�20����Ҫ�����д���򣬼�������������е�������к͡�

����ּ�ڲ��Ը��ֲ�ͬ���㷨�ڸ�����������µı��֡�������������ص����£�

����1���������ȼۣ����Ի�����ȷ�ԣ�
����2��102�����������
����3��103�����������
����4��104�����������
����5��105�����������
�����ʽ:

�����1�и���������KK (\le 100000��100000)����2�и���KK������������Կո�ָ���

�����ʽ:

��һ�������������к͡��������������������Ϊ�����������0��

��������:

6
-2 11 -4 13 -5 -2
�������:

20
*/ 

#include<stdio.h>


int MaxSubseSum(int num[] , int n);

int main(void){
	
	int a = 0;
	int sum =0 ;
	
	scanf("%d", &a);
	int k[a];
	int i = 0;
	for(i = 0; i<a; i++){
		scanf("%d", &k[i]);
	}
	sum = MaxSubseSum(k, a);
	printf("%d", sum);
	
	return 0;
}

int MaxSubseSum(int num[], int n){
	int ThisSum, MaxSum ;
	int i;
	//��ʼ��This and Max Sum 
	ThisSum = MaxSum = 0;
	
	for(i = 0; i<n ; i++){
		ThisSum+=num[i];
		if(ThisSum > MaxSum){
			MaxSum = ThisSum;
		}else if(ThisSum < 0){
			ThisSum = 0;
		}
	}
	return MaxSum ;
}
