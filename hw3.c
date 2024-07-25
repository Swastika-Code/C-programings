#include<stdio.h>
main()
{
	int n,a,sum=0,c;
	printf("enter the number:");
	scanf("%d",&n);
	c=n;
	while(n>0)
	{
		a=n%10;
		sum=sum+a*a;
		n=n/10;
	}
	printf("the sum  of square of digits is: %d",sum);
	
}
