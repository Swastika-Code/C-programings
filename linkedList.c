#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node *link;
}Node;

Node *li=NULL;

Node *getnode(){
	Node *n=(Node *)malloc(sizeof(Node));
	n->link=NULL;
	return n;
}

void insertBeg(int n){
	Node *New=getnode();
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
void insertEnd(int n){
	Node *N=getnode();
	N->data=n;
	if(li==NULL)
	{
		li=N;
	}
	else if(li->link==NULL)
	{
		li->link=N;
	}
	else{
		Node *x=li;
		while(1)
		{
			x=x->link;
			if(x->link==NULL)
			{
				break;
			}
		}
		x->link=N;
		
	}
}
void DelBeg(){
	Node *x=li;
	if(li==NULL)
	{
		printf("empty");
	}
	else if(li->link==NULL){
		li=NULL;
	}
	else{
		li=li->link;
		free(x);
	}
}
void DelEnd(){
	Node *x,*y;
	if(li==NULL)
	{
		printf("empty\n");
	}
	else if(li->link==NULL)
	{
		li=NULL;
	}
	else if(li->link->link==NULL)
	{
		y=li->link;
		x=li;
		x->link=NULL;
		free(y);
	}
	else
	{
		x=li;
		while(1)
		{
			x=x->link;
			if((x->link)->link==NULL)
			{
				break;
			}
		}
		y=x->link;
		x->link=NULL;
		free(y);
	}
}
void display(){
	if(li==NULL)
	{
		printf("empty");
	}
	Node *x=li;
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
		printf("1>insert begining \n2> insert End\n3>delete begining\n4>delete end \n5>display\n6>exit\nenter your choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("enter a number to insert:");
				scanf("%d",&n);
				insertBeg(n);
				display();
			break;
			case 2:
				printf("enter a number to insert:");
				scanf("%d",&n);
				insertEnd(n);
				display();
			break;
			case 3:
				DelBeg();
				display();
			break;
			case 4:
				DelEnd();
				display();
			break;
			case 5:
			case 6:
				exit(0);
			default:
				printf("invalid choice");
		}
	}
}












