#include<stdio.h>
main()
{
	int a,b,sum,sub,mul,div,mod;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	sum=a+b;
	sub=a-b;
	div=a/b;
	mul=a*b;
	mod=a%b;
	printf("the sum=%d\n",sum);
	printf("the sub=%d\n",sub);
	printf("the div=%d\n",div);
	printf("the mul=%d\n",mul);
	printf("the mod=%d\n",mod);
}


