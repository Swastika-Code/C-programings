#include<stdio.h>
main()
{
	int in,p;
	printf("enter a value:");
	scanf("%ld",&in);
	in-=50000;
	if(in<=300000)
	printf("no tax");
	else if (in>300000 && in<=700000)
	{
		in=in-300000;
		p=in*0.05;
		printf("the tax amount=%ld",p);
	}
	
	else if (in>700000 && in<=1000000)
	{
		in=in-300000;
		p=in*0.1;
		printf("the tax amount=%ld",p);
	}
	else if (in>1000000 && in<=1200000)
	{
		in=in-300000;
		p=in*0.15;
		printf("the tax amount=%ld",p);
	}
	else if (in>1200000 && in<=1500000)
	{
		in=in-300000;
		p=in*0.20;
		printf("the tax amount=%ld",p);
	}
	else
	{
		in=in-300000;
		p=in*0.30;
		printf("the tax amount=%ld",p);
	}
}
