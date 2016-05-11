#include<stdio.h>
#include<stdlib.h>
typedef struct _node{
	int value;
	struct _node *next;
}Node;
typedef struct _list{
	Node *head;
	//Node *tail;
}List;

void add(List * pList, int number);
void newprintf(List *pList);

int main(int agrc, char const *agrv[])
{
	
	//Node * head = NULL;
	List list;
	list.head = NULL;
	int number;
	do{
		scanf("%d", number);
		if(number != -1){
			add(&list, number);
		}
	}while(number !=1 );
	//printf it 
	newprintf(&list); 
	//search a number in list
	printf("input a number!");
	int number2;
	scanf("%d", &number2);
	Node *p;
	int isFound = 0;
	for(p = list.head; p; p->next){
		if(p->value == number2){
			printf("找到\n");
			isFound = 1;
			break;
		}
	}
	if(!isFound){
		printf("没有找到!\n");
	}
	//remove a number
	for(p = list.head; p; p->next){
		if(p->value == number2){
			printf("找到\n");
			isFound = 1;
			break;
		}
	} 
	
	return 0;
}
void add(List *pList, int number)
{
		//add a Linked-list
			Node *p = (Node*)malloc(sizeof(Node));
			p->value = number;
			p->next =NULL;
			//find the last
			Node *last = pList->head;
			if(last){
				while (last->next){
					last = last->next;
				}
				//attach
				last->next = p;
			}else{
				pList->head = p;
			}
}
void newprintf(List *pList)
{

	Node * p;
	for(p =pList->head; p; p = p->next){
		printf("%d\t", p->value);
	}
	printf("\n");
}
