#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	
	c=(a*a)+(2*a*b)+(b*b);
	c=(a*a)-(2*a*b)+(b*b);
	printf("(a+b)^2=%d",c);
	printf("(a-b)^2=%d",c);
	
}
