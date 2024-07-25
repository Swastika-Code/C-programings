#include<stdio.h>
int main()
{
	float principal,rate,time,interest;
	printf("enter principal amount:\n");
	scanf("%f",&principal);
	printf("enter interest rate:\n");
	scanf("%f",&rate);
	printf("enter time period(in years):");
	scanf("%f",&time);
	interest=(principal*rate*time)/100;
	printf("simple interest is:%f\n",interest);
	return 0;
}
