#include <stdio.h>

int main()
{
	int n,nR,nS;
	scanf("%d",&n);
	char *s1[]={
		"unreadable",
		"barely readable, occasional words distinguishable",
		"readable with considerable difficulty",
		"readable with practically no difficulty",
		"rerfectly readable",
		};
	char *s2[]={
		"Faint signals, barely perceptible",
		"Very weak signals",
		"Weak signals",
		"Fair signals",
		"Fairly good signals",
		"Good signals",
		"Moderately strong signals",
		"Strong signals",
		"Extremely strong signals",
		};
		
	nS=n/10-1;
	nR=n%10-1;
	printf("%s, %s.",s2[nR],s1[nS]);
	return 0;
}
