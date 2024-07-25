#include<stdio.h>
int s=0,Q[20],f=0,r=-1;
insert(int x)
{
	r++;
	if(r>(s-1))
	{
		printf("overflow");
	}
	else
	{	
		Q[r]=x;
	}
}

del()
{
	if(f>r)
	{
		printf("underflow");
	}
	else{
		++f;
	}
}

display(){
	int i;
	if(f>r)
	{
		printf("underflow");
	}
	else{
		for(i=f;i<r;i++)
		{
			printf("%d,",Q[i]);
		}
		}
}
main(){
	int ch,n;
	printf("enter the size of queue");
	scanf("%d",&s);
	while(1)
	{
	printf("1> enqueue\n");
	printf("2> dequeue\n");
	printf("3> display\n");
	printf("4> exit\n");
	printf("Enter your choice:");
	scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("enter the number to insert:");
				scanf("%d",&n);
				insert(n);
			break;	
			case 2:
				del();
			break;
			case 3:
				display();
			break;
			case 4:
				exit(1);
			default:
				printf("invalid");
		}
	}
}
