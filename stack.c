#include<stdio.h>

int s[5],top=-1;
void push(int n)
{
	if(top>4)
	{
		printf("stack overflow");
	}
	else
	{
		s[++top]=n;
	}
}
void pop()
{
	if (top<0)
	{
		printf("stack underflow");
	}
	{
		top--;
	}
}
void display()
{
	int i;
	for(i=0;i<=top;i++)
	{
	printf("%d,",s[i]);
}
} 
main()
{
	int ch,n;
	while(1)
	{
		printf("\n1>push\n");
		printf("2>pop\n");
		printf("3>peek\n");
		printf("5>display\n");
		printf("6>exit\n");
		printf("enter your choice:");
		scanf("%d",ch);
		switch(ch)
		{
		
		case 1:
			printf("enter a data to push:");
			scanf("%d",&n);
			push(n);
			display();
			break;
		case 2:
			pop();
			display();
			break;
		case 3:
			printf("top value is=%d",s[top]);
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









