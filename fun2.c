#include<stdio.h>

int issum(int a,int b)
{
	int sum=a+b;
	return sum;
	
}
int isdiff(int a,int b)
{
	int diff=a-b;
	return diff;
	
}
int ismul(int a,int b)
{
	int mul=a*b;
	return mul;
	
}
int isdiv(int a,int b)
{
	int div=a/b;
	return div;
	
}
int ismod(int a,int b)
{
	int mod=a%b;
	return mod;
	
}
main()
{
	int ch;
	int p,a,b;
	printf("1> sum of the number:\n");
	printf("2> diff of the number:\n");
	printf("3> mul of the number:\n");
	printf("4> div of the number:\n");
	printf("5> mod of the number:\n");
	printf("enter your choice:");
	scanf("%d",&ch);
	if(ch==1)
	{
		printf("enter the value of:");
		scanf("%d",&a);
		printf("enter the value of:");
		scanf("%d",&b);
		p=issum(a,b);
		printf("sum of the number=%d",p);
	}
	else if(ch==2)
	{
		printf("enter the value:");
		scanf("%d",&a);
		printf("enter the value of:");
		scanf("%d",&b);
		p=isdiff(a,b);
		printf("diff of the number=%d",p);
	}
	else if(ch==3)
	{
		printf("enter the value:");
		scanf("%d",&a);
		printf("enter the value:");
		scanf("%d",&b);
		p=ismul(a,b);
		printf("mul of the number=%d",p);
	}
	else if(ch==4)
	{
		printf("enter the value:");
		scanf("%d",&a);
		printf("enter the value:");
		scanf("%d",&b);
		p=isdiv(a,b);
		printf("div of the number=%d",p);
	}
	else if(ch==5)
	{
		printf("enter the value:");
		scanf("%d",&a);
		printf("enter the value:");
		scanf("%d",&b);
		p=ismod(a,b);
		printf("mod of the number=%d",p);
	}
	else
	{
		printf("invalid choice:");
	}

}

