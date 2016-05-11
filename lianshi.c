//链式结构的线性表 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>   //rand函数和srand~time种子
#include<windows.h>
#include<stdbool.h>

#define SIZE 10

typedef struct LNode *PtrToLNode;
struct LNode {
	int Data;
	PtrToLNode Next;
}; 
 
typedef PtrToLNode Position;
typedef PtrToLNode List;

//查找！ L里面的x 
Position Find(List L, int x){
	Position p = L;   // p指向第一个节点 
	
	while(p && p->Data!=x )  p = p->Next;
	if(p){
		printf("已经查找到！为%d\n", p->Data);
		return p;   //返回指向的p指针！	
	}else{
		printf("未查到！error");
		exit(0);
	}
	  
}

//插入x在i位置

bool Insert( List L, int X, Position P )
{ /* 这里默认L有头结点 */
    Position tmp, pre;
 
    /* 查找P的前一个结点 */        
    for ( pre=L; pre&&pre->Next!=P; pre=pre->Next ) ;            
    if ( pre==NULL ) { /* P所指的结点不在L中 */
        printf("插入位置参数错误\n");
        return false;
    }
    else { /* 找到了P的前一个结点pre */
        /* 在P前插入新结点 */
        tmp = (Position)malloc(sizeof(struct LNode)); /* 申请、填装结点 */
        tmp->Data = X; 
        tmp->Next = P;
        pre->Next = tmp;
        return true;
    }
}

//删除某个节点

bool Delete(List L, Position P){
	Position tmp, pre;
	
	//查找p的前一个节点 
	for(pre =L; pre && pre->Next!=P; pre=pre->Next);
	if(pre == NULL || P==NULL){  // P不是指向L中的
		printf("删除位置参数错误！");
		return false; 
	}else{
		//找到了P的前一个节点pre
		// 删除P位置的节点
		pre->Next = P->Next;
		free(P);
		return true; 
	}
} 

void printfL(List l2){
	int i = 0;
	for(i = 0; i<(SIZE); i++, l2++){
		printf("% 4d ",l2->Data );
	}
}

int main(void){
	//先产生10个随机数储存到链表里面！
	 int i = 0;
	 struct LNode h[SIZE];
	 srand((unsigned)time(NULL));//随机数种子！
	  
	 for(i = 0; i<SIZE; i++){
		h[i].Data = rand()%100;
		h[i].Next = &h[i+1];			 	
	}
	printf("生成的数为~\n");
	for(i = 0; i<SIZE; i++){
		printf("% 4d ",h[i].Data );
	}
	
	int w = h[rand()%SIZE].Data;
	printf("\n查找%d\n", w);
	Find(&h[0], w ); 
	int i1 = rand()%SIZE;
	if(Delete(&h[0], h[1].Next)){
		printf("删除此节点\n"); 
	
	}
		
	for(i = 0 ; i<SIZE; i++){
		printf("% 4d ",h[i].Data );
	}

printf("\n插入%d 在位置%d\n", w, i1);
	Insert(&h[0], w,  h[i1-1].Next);
	printfL(&h[0]);	
	return 0;
}
