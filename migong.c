#include<stdio.h>
#include<stdlib.h>
//ֱ������10x10�����鵱���Թ� 
int a[10][10] = {
    {0,0,0,0,0,0,0,0,0,0},
    {0,1,1,0,1,1,1,0,1,0},
    {0,1,1,0,1,1,1,0,1,0},
    {0,1,1,1,1,0,0,1,1,0},            //0:�߽�  1��·   2��ͨ·   -1����·
    {0,1,0,0,0,1,1,1,1,0},
    {0,1,1,1,0,1,1,1,1,0},
    {0,1,0,1,1,1,0,1,1,0},
    {0,1,0,0,0,1,0,0,1,0},
    {0,0,1,1,1,1,1,1,1,0},
    {0,0,0,0,0,0,0,0,0,0}
};
//���� �ṹ�� ���� 

typedef struct oo{
    int x;
    int y;
}seat;


typedef struct hee
{
    int i;
    int di;
    seat xy;
}DD;


typedef struct pp{
    DD t;
    struct pp*next;
}hehe;


void fist(hehe**fist)
{
    *fist  = (hehe*)malloc(sizeof(hehe));
    (*fist)->next = NULL;

}


void push(hehe*fist,DD d)
{
    hehe* p = (hehe*)malloc(sizeof(hehe));
    p->t = d;
    p->next = fist->next;
    fist->next = p;
    printf("%d   %d\n",d.xy.y,d.xy.x);
}


void pop(hehe*fist,DD *d)
{
    hehe*ww = fist->next;
    *d = fist->next->t;
    fist->next = ww->next;
    free(ww);
}


seat next(seat a,int i)
{
    seat b = a;
    if(i == 1)
        b.y++;
    if(i == 2)
        b.x++;
    if(i == 3)
        b.y--;
    if(i == 4)
        b.x--;
    return b;
}


int iszore(hehe*fist )
{
    if(fist->next == NULL)
        return 1;
    else
        return 0;
}


int pass(seat a_s)
{
    if(a[a_s.x][a_s.y] == 1)
        return 1;
    else
        return 0;
}



void footprint(seat a_s)
{
    a[a_s.x][a_s.y] = 2;
}


void makeprint(seat a_s)
{
    a[a_s.x][a_s.y] = -1;
}


int zoupath(seat go,seat end)
{
    hehe*f ;
    fist(&f);
    //printf("%d\n",f);
    int step = 1;
    DD e;
    seat pos = go;
    do{
        if(pass(pos))
        {
            footprint(pos);
            e.i = step;
            e.di = 1;
            e.xy = pos;
            push(f,e);
            if(pos.x == end.x&&pos.y ==end.y)
            {
                return 1;
            }
            pos = next(pos ,1);
            step++;
        }
        else
        {
            if(!iszore(f))
            {
                pop(f,&e);
                printf("%d   %d\n",e.xy.y,e.xy.x);
                while(e.di == 4&&!iszore(f))
                {
                    makeprint(e.xy); pop(f,&e);
                    printf("%d   %d\n",e.xy.y,e.xy.x);
                }   
                if(e.di<4)
                {
                    e.di++; push(f,e);
                    pos = next(e.xy,e.di);
                }
            }
        }
    }while(!iszore(f));
    return 0;
}

int main()
{
	printf("��ӡ���Թ���\n");
	int h =0, j =0;
	for(h=0;h<10;h++ ){
		for(j=0; j<10; j++){
			printf("%d",a[h][j]);
		}
		printf("\n");
	}
	printf("\n���ó�ʼλ�ã�(1,1,8,8)\n");
    seat a,b;
    a.x =1;
    a.y =1;
    b.x = 8;
    b.y = 8;
    printf("��ӡ��������ɵ�Ŀ����Ŀ�������ʾ��\n");
    printf("%d\n",zoupath(a,b));
    printf("�Ѿ������յ㣡\n");
    
    return 0;
}
