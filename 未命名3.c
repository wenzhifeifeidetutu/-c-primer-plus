#include<stdio.h>
int main()
{

    int i=0, numa=0, numb=0;
    scanf("%d/%d", &numa, &numb);
    printf("0.");
    for(i=0; i<200; i++)
    {
        printf("%d",(numa*10)/numb);
        numa=(numa*10)%numb;
        if(numa == 0)break;
    }
    printf("\n");
    return 0;
}
