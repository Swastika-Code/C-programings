#include<stdio.h>
main()
{
	float inr,usd;
	printf("enter the rupees:");
	scanf("%f",&inr);
	usd=inr/82.92;
	printf("\nthe dollar is $%0.2f",usd);
}
