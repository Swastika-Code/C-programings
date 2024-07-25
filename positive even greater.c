#include<stdio.h>
int main()
{
	int num;
	printf("enter an integer:\n");
	scanf("%d",&num);
	
	if(num%2==0)
	printf("%d is even.",num);
	
	if(num>0)
	printf("%d is positive.",num);
	
	if(num>100)
	printf("%d is greater than 100.",num);
	
}
