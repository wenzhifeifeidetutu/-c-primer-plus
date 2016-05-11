//��ʽ�ṹ�����Ա� 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>   //rand������srand~time����
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

//���ң� L�����x 
Position Find(List L, int x){
	Position p = L;   // pָ���һ���ڵ� 
	
	while(p && p->Data!=x )  p = p->Next;
	if(p){
		printf("�Ѿ����ҵ���Ϊ%d\n", p->Data);
		return p;   //����ָ���pָ�룡	
	}else{
		printf("δ�鵽��error");
		exit(0);
	}
	  
}

//����x��iλ��

bool Insert( List L, int X, Position P )
{ /* ����Ĭ��L��ͷ��� */
    Position tmp, pre;
 
    /* ����P��ǰһ����� */        
    for ( pre=L; pre&&pre->Next!=P; pre=pre->Next ) ;            
    if ( pre==NULL ) { /* P��ָ�Ľ�㲻��L�� */
        printf("����λ�ò�������\n");
        return false;
    }
    else { /* �ҵ���P��ǰһ�����pre */
        /* ��Pǰ�����½�� */
        tmp = (Position)malloc(sizeof(struct LNode)); /* ���롢��װ��� */
        tmp->Data = X; 
        tmp->Next = P;
        pre->Next = tmp;
        return true;
    }
}

//ɾ��ĳ���ڵ�

bool Delete(List L, Position P){
	Position tmp, pre;
	
	//����p��ǰһ���ڵ� 
	for(pre =L; pre && pre->Next!=P; pre=pre->Next);
	if(pre == NULL || P==NULL){  // P����ָ��L�е�
		printf("ɾ��λ�ò�������");
		return false; 
	}else{
		//�ҵ���P��ǰһ���ڵ�pre
		// ɾ��Pλ�õĽڵ�
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
	//�Ȳ���10����������浽�������棡
	 int i = 0;
	 struct LNode h[SIZE];
	 srand((unsigned)time(NULL));//��������ӣ�
	  
	 for(i = 0; i<SIZE; i++){
		h[i].Data = rand()%100;
		h[i].Next = &h[i+1];			 	
	}
	printf("���ɵ���Ϊ~\n");
	for(i = 0; i<SIZE; i++){
		printf("% 4d ",h[i].Data );
	}
	
	int w = h[rand()%SIZE].Data;
	printf("\n����%d\n", w);
	Find(&h[0], w ); 
	int i1 = rand()%SIZE;
	if(Delete(&h[0], h[1].Next)){
		printf("ɾ���˽ڵ�\n"); 
	
	}
		
	for(i = 0 ; i<SIZE; i++){
		printf("% 4d ",h[i].Data );
	}

printf("\n����%d ��λ��%d\n", w, i1);
	Insert(&h[0], w,  h[i1-1].Next);
	printfL(&h[0]);	
	return 0;
}
