#include<stdio.h>
int stack[20],s=0,p=-1;

push(int x){
	
	if(p>(s-1))
	{
		printf("over flow");
	}
	else{	
		p=p+1;
		stack[p]=x;
	}
}

pop(){
	if(p==-1)
	{
		printf("underflow");
	}
	else{
		p--;
	}
}
display(){
	int i;
	if(p==-1)
	{
		printf("underflow/Empty");
	}
	else{
		for(i=0;i<p;i++)
		{
			printf("%d,",stack[i]);
		}
	}
}

main(){
	int ch,n;
	printf("enter the size of stack");
	scanf("%d",&s);
	while(1)
	{
	printf("1> push\n");
	printf("2> pop\n");
	printf("3> display\n");
	printf("4> exit\n");
	printf("Enter your choice:");
	scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("enter the number to push:");
				scanf("%d",&n);
				push(n);
			break;	
			case 2:
				pop();
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
