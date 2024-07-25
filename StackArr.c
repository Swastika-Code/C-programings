#include<stdio.h>
int S[5],top=-1;//global variable

void push(int n)
{
	if(top>4)
	{
		printf("Stack overflow");
	}
	else{
		S[++top]=n;
	}
}

void pop()
{
	if(top<0)
	{
		printf("stack underflow");
	}
	else
	{
		top--;
	}
}

void display(){
	int i;
	for(i=0;i<=top;i++)
	{
		printf("%d,",S[i]);
	}
}
main(){
	int ch,n;
	while(1)
	{
		printf("\n1> Push\n");
		printf("2> Pop\n");
		printf("3> Peek\n");
		printf("4> Dispaly\n");
		printf("5> exit\n");
		printf("enter your choice :");
		scanf("%d",&ch);

		switch(ch){
		case 1:
			printf("enter a data to push :");
			scanf("%d",&n);
			push(n);
			display();
		break;
		case 2:
			pop();
			display();
		break;
		case 3:
			printf("top value is =%d",S[top]);
		break;
		case 4:
			display();
		break;
		case 5:
			exit(0);
		default:
			printf("invalid choice");
		}
	}
}
