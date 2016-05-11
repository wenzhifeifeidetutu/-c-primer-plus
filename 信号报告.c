#include<stdio.h>
int main(void)
{
	char a[5][100]={", unreadable.", 
	", barely readable, occasional words distinguishable.",
	", readable with considerable difficulty.",
	", readable with practically no difficulty.",
	", perfectly readable."
	};
	char b[9][50]={"Faint signals, barely perceptible", 
	"Very weak signals",
	"Weak signals",
	"Fair signals",
	"Fairly good signals",
	"Good signals",
	"Moderately strong signals",
	"Strong signals",
	"Extremely strong signals",
	};
	int i=0;
	int j,k;
	scanf("%d", &i);
	j=i/10-1;
	k=i%10-1;
	printf("%s%s", b[k], a[j]);
	return 0;
}	
