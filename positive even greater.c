#include<stdio.h>
int main()
{
	int num;
	printf("enter an integer:");
	scanf("%d",&num);
	
	if(num%2==0)
	printf("%d is even.\n",num);
	
	if(num>0)
	printf("%d is positive.\n",num);
	
	if(num>100)
	printf("%d is greater than 100.\n",num);
	
}
