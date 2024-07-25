#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node *link;
}Stack;

Stack *li=NULL;

Stack *getStack(){
	Stack *n=(Stack *)malloc(sizeof(Stack));
	n->link=NULL;
	return n;
}

void push(int n){
	Stack *New=getStack();
	New->data=n;
	if(li==NULL)
	{
		li=New;
	}
	else{
		New->link=li;
		li=New;
	}
}

void pop(){
	Stack *x=li;
	if(li==NULL)
	{
		printf("under flow");
	}
	else if(li->link==NULL){
		li=NULL;
	}
	else{
		li=li->link;
		free(x);
	}
}
void display(){
	if(li==NULL)
	{
		printf("Under flow");
	}
	Stack *x=li;
	while(x!=NULL)
	{
		printf("%d,",x->data);
		x=x->link;	
	}
	printf("\n");
}
main()
{
	int ch,n;
	while(1){
		printf("1>push \n2> pop\n6>exit\nenter your choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("enter a number to insert:");
				scanf("%d",&n);
				push(n);
				display();
			break;
			case 2:
				pop();
				display();
			break;
			case 6:
				exit(0);
			default:
				printf("invalid choice");
		}
	}
}












