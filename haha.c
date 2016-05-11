#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;

typedef struct node
{
ElemType data;
struct node *next;
} Node, *LinkList;

LinkList init()
{
LinkList p;
p=(LinkList)malloc(sizeof(Node));
p->next=NULL;
return p;
}

int len(LinkList H)
{
int len=0;
LinkList p;
for(p=H->next; p; p=p->next) len++;
return len;
}

void f_insert(LinkList H,ElemType s)
{
LinkList p,q;
p=(LinkList)malloc(sizeof(Node));
p->next=NULL;
p->data=s;
p->next=H->next;
H->next=p;
}

LinkList r_insert(LinkList H,ElemType s)
{
LinkList p,q;
for(q=H; q->next; q=q->next);
p=(LinkList)malloc(sizeof(Node));
p->next=NULL;
p->data=s;
q->next=p;
return p;
}

void dele(LinkList H,LinkList p)
{
LinkList q;
for(q=H; q->next!=p; q=q->next);
q->next=p->next;
free(p);
}

LinkList search_val(LinkList H,ElemType s)
{
LinkList p;
for(p=H->next; p; p=p->next)
if(p->data==s)
return p;
return NULL;
}

LinkList search_no(LinkList H,int pos)
{
LinkList p;
int i=1;
if(pos<=0 || pos>len(H))
{
printf("�������Ų��Ϸ���\n");
return NULL;
}
for(p=H->next; i!=pos; p=p->next)i++;
return p;
}

void print_all(LinkList H)
{
LinkList p;
for(p=H->next; p; p=p->next)
printf("%d ",p->data);
printf("\n");
}

int insert(LinkList H,int pos,ElemType e)
{
LinkList p,q;

if(pos>len(H) || pos<1)
{
printf("�����λ�ò��Ϸ�\n");
return 0;
}
else if(pos==1) f_insert(H,e);
else
{
p=search_no(H,pos-1);
q=(LinkList)malloc(sizeof(Node));
q->data=e;
q->next=p->next;
p->next=q;
}
return 1;
}

void merge(LinkList La,LinkList Lb,LinkList *Lc)
{
LinkList pa,pb,pc;
pa=La->next;
pb=Lb->next;
(*Lc)=pc=La;
while(pa && pb)
{
if(pa->data <= pb->data)
{
pc->next = pa;
pc = pa;
pa = pa->next;
}
else
{
pc->next = pb;
pc = pb;
pb = pb->next;
}
}

pc->next = pa? pa:pb;
}

void destroy(LinkList H)
{
LinkList p=H,q=p->next;
while(q)
{
free(p);
p=q;
q=p->next;
}
free(p);
}

int main()
{
LinkList H,Ha,Hb,Hc,p;
int n,menu,i;
ElemType e;

H=init();
Ha=init();
Hb=init();

{
printf("\n\n*******************���������*******************\n");
printf("1.����������(ͷ�����뷨)\n");
printf("2.����������ֵ\n");
printf("3.����������\n");
printf("4.�����������\n");
printf("5.ɾ��������ĳ���\n");
printf("6.����Ų��ҵ�������\n");
printf("7.�鲢��������\n");
printf("8.�˳�����\n");
printf("����˵�����:");
scanf("%d",&menu);

switch(menu)
{
case 1:
destroy(H);
H=init();
printf("����Ҫ�����������\n");
scanf("%d",&n);

printf("����Ҫ�����%d�����ֵ,��ֵ�ÿո�ָ���\n",n);
for(i=0; i<n; i++)
{
scanf("%d",&e);
f_insert(H,e);
}
printf("���������ɹ�!\n");
case 2:
printf("�����Ԫ��Ϊ:\n");
print_all(H);
system("pause");
break;
case 3:
printf("�������Ϊ%d\n",len(H));
system("pause");
break;
case 4:
printf("��������λ��:\n");
scanf("%d",&n);
printf("��������Ԫ��ֵ:\n");
scanf("%d",&e);
if(insert(H,n,e))
{
printf("����Ԫ��%d���ֵΪ:\n",e);
print_all(H);
}
system("pause");
break;
case 5:
printf("����Ҫɾ����Ԫ��ֵ\n");
scanf("%d",&e);
if((p=search_val(H,e))!=NULL)
{
dele(H,p);
printf("ɾ��Ԫ��%d���ֵΪ:\n",e);
print_all(H);
}
else printf("Ԫ��%d������!\n",e);
system("pause");
break;
case 6:
printf("����Ҫ���ҵ�Ԫ�����:\n");
scanf("%d",&n);
if((p=search_no(H,n))!=NULL)
printf("�����%d��Ԫ��Ϊ:%d\n",n,p->data);
system("pause");
break;
case 7:
destroy(Ha);
destroy(Hb);
Ha=init();
Hb=init();
printf("������������Ha������:\n");
scanf("%d",&n);
printf("������������Ha��%d�����ֵ,��ֵ�ÿո�ָ�:\n",n);
for(i=0; i<n; i++)
{
scanf("%d",&e);
r_insert(Ha,e);
}

printf("������������Hb������:\n");
scanf("%d",&n);
printf("������������Hb��%d�����ֵ,��ֵ�ÿո�ָ�:\n",n);
for(i=0; i<n; i++)
{
scanf("%d",&e);
r_insert(Hb,e);
}
merge(Ha,Hb,&Hc);
printf("�ϲ�������������ֵΪ:\n");

print_all(Hc);
system("pause");
break;
case 8:
destroy(H);
destroy(Ha);
destroy(Hb);
return 0;
default:
printf("����Ĳ˵�������!\n");
system("pause");
break;
}

}
while(1);

return 0;
}

