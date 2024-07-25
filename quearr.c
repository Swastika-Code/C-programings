#include<stdio.h>
int Q[5],F=0,R=-1;
void enq(int n)
{
	if(R>4)
	{
		printf("overflow");
	}
	else
	{
		Q[++R]=n;
		
	}
}
void deq()
{
	if(R<F)
	{
		printf("underflow");
		
	}
	else
	{
		++F;
	}
}
void display()
{
	int i;
	for (i=F;i<=R;i++)
	{
		printf("%d,",Q[i]);
	}
}

main()
{
	int ch,n;
	while(1)
	{
		printf("\n1.enqueue\n");
		printf("2.dequeue\n");
		printf("3.display\n");
		printf("4.exit\n");
		printf("enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("enter a data ");
				scanf("%d",&n);
				enq(n);
				display();
				break;
			case 2:
				deq();
				display();
				break;
				
			case 3:
				display();
				break;
				
			case 4:
				exit(0);
			default:
				printf("invaild choice");
				
				
		}
	}
	
}


