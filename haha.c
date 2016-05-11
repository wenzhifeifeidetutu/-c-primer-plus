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
printf("输入的序号不合法！\n");
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
printf("输入的位置不合法\n");
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
printf("\n\n*******************单链表操作*******************\n");
printf("1.构建单链表(头部插入法)\n");
printf("2.输出单链表各值\n");
printf("3.输出单链表表长\n");
printf("4.向单链表插入结点\n");
printf("5.删除单链表某结点\n");
printf("6.按序号查找单链表结点\n");
printf("7.归并有序单链表\n");
printf("8.退出程序\n");
printf("输入菜单号码:");
scanf("%d",&menu);

switch(menu)
{
case 1:
destroy(H);
H=init();
printf("输入要插入结点个数：\n");
scanf("%d",&n);

printf("输入要插入的%d个结点值,各值用空格分隔：\n",n);
for(i=0; i<n; i++)
{
scanf("%d",&e);
f_insert(H,e);
}
printf("单链表创建成功!\n");
case 2:
printf("链表各元素为:\n");
print_all(H);
system("pause");
break;
case 3:
printf("单链表表长为%d\n",len(H));
system("pause");
break;
case 4:
printf("输入插入的位置:\n");
scanf("%d",&n);
printf("输入插入的元素值:\n");
scanf("%d",&e);
if(insert(H,n,e))
{
printf("插入元素%d后各值为:\n",e);
print_all(H);
}
system("pause");
break;
case 5:
printf("输入要删除的元素值\n");
scanf("%d",&e);
if((p=search_val(H,e))!=NULL)
{
dele(H,p);
printf("删除元素%d后各值为:\n",e);
print_all(H);
}
else printf("元素%d不存在!\n",e);
system("pause");
break;
case 6:
printf("输入要查找的元素序号:\n");
scanf("%d",&n);
if((p=search_no(H,n))!=NULL)
printf("链表第%d个元素为:%d\n",n,p->data);
system("pause");
break;
case 7:
destroy(Ha);
destroy(Hb);
Ha=init();
Hb=init();
printf("输入有序单链表Ha结点个数:\n");
scanf("%d",&n);
printf("输入有序单链表Ha的%d个结点值,各值用空格分隔:\n",n);
for(i=0; i<n; i++)
{
scanf("%d",&e);
r_insert(Ha,e);
}

printf("输入有序单链表Hb结点个数:\n");
scanf("%d",&n);
printf("输入有序单链表Hb的%d个结点值,各值用空格分隔:\n",n);
for(i=0; i<n; i++)
{
scanf("%d",&e);
r_insert(Hb,e);
}
merge(Ha,Hb,&Hc);
printf("合并后的有序单链表各值为:\n");

print_all(Hc);
system("pause");
break;
case 8:
destroy(H);
destroy(Ha);
destroy(Hb);
return 0;
default:
printf("输入的菜单号有误!\n");
system("pause");
break;
}

}
while(1);

return 0;
}

