/*
Now you are supposed to find the largest sum, together with the first and the last numbers of the maximum subsequence.

Input Specification:

Each input file contains one test case. Each case occupies two lines. The first line contains a positive integer KK (\le 10000¡Ü10000). The second line contains KK numbers, separated by a space.

Output Specification:

For each test case, output in one line the largest sum, together with the first and the last numbers of the maximum subsequence. The numbers must be separated by one space, but there must be no extra space at the end of a line. In case that the maximum subsequence is not unique, output the one with the smallest indices ii and jj (as shown by the sample case). If all the KK numbers are negative, then its maximum sum is defined to be 0, and you are supposed to output the first and the last numbers of the whole sequence.

Sample Input:

10
-10 1 2 3 4 -5 -23 3 7 -21
Sample Output:

10 1 4
*/
#include<stdio.h>

int MaxSum(int *a, int j );

int main(void){
	int n;
	scanf("%d", &n);
	int a[n];
	int i;
	for(i =0; i<n; i++){
		scanf("%d", &a[i]);
	}
	MaxSum(a, n);
	return 0;
}

int MaxSum(int *a, int j){
	int maxsum = 0;
	int sum;
	int i , k, h;
	int first = 0;
	int last = 0;
	for(i = 0; i<j ;i++){    //×ó¶Ë 
			sum =0;		
		for(k = i; k<j; k++){  //ÓÒ¶Ë 
			sum += a[k];
			if(sum > maxsum){
				maxsum = sum;
				last = k ;
				first = i ;
			}	
		}
	}
	printf("%d ", maxsum);
	printf("%d %d", a[first], a[last]);
	
	return maxsum;	
}
