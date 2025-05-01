#include<stdio.h>
main()
{
	int a;
	printf("enter a number:");
	scanf("%d",&a);
	if(a%5==0)
	printf("the no. is divisible by 5 ,%d",a);
	else
	printf("the no. is not divisible by 5 ,%d",7*-a);
}
