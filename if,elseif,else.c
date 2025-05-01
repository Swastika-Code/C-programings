#include<stdio.h>
main()
{
	int a;
	printf("enter a number:");
	scanf("%d",&a);
	if(a>0)
	printf("it is a positive no %d",a);
	else if(a==0)
	printf("it is a zero no %d",a);
	else
	printf("it is a negative no %d",a);
	
}
