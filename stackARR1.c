#include<stdio.h>
int a[6],i=-1;

void push(int n)
{
	if(i<6)
	{
		a[++i]=n;
	}
	else{
		printf("overflow!");
	}
}

void pop()
{
	if(i<0)
	{
		printf("underflow\n");
	}
	else
	{
		i--;
	}
}

int peek()
{
	if(i<0)
	{
		printf("underflow");
	}
	else{
		printf("top element is = %d",a[i]);
	}
}

void display(){
	int j;
	if(i<0)
	{
		printf("underflow");
	}
	for(j=0;j<=i;j++)
	{
		printf("%d,",a[j]);
	}
	printf("\n");
}

main()
{
	int ch,in;
	while(1){
		printf("1> push\n2> pop\n3> peek\n4> display\n5> exit\nenter your choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("enter a value of push:");
				scanf("%d",&in);
				push(in);
				display();
			break;
			case 2:
				pop();
				printf("pooopped!");
				display();
			break;
			case 3:
				peek();
			break;
			case 4:
				display();
			break;
			case 5:
				exit(0);
			default:
				printf("wrong choice!");
		}
	}
}










