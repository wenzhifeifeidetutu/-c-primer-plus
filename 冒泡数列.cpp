#include<iostream>
using namespace std
int main();
	int n, a[1000];//һ��n������n������1000.��a ��������Щ����
	int i = 0 ,j = 0;  //ѭ������
	cin >> n ;  //����n����
	for (i = 0; i < n - 1; i++)
		for (j = 1; j < n -i ; j++){
			if (a[j-1] > a[j] ) {
				int temp = a[j];
				a[j] =a[j-1];
				a[j-1] = temp;
		}	}	
	//�������
	for (i = 0; i < n; i++) {
		count << a[i] << endi;
	}
		return 0;
}		