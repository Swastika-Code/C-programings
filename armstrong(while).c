#include<stdio.h>
main()
{
	int n,a,sum=0,c;
	printf("enter the number of find armstrong or not:");
	scanf("%d",&n);
	c=n;
	while(n>0)
	{
		a=n%10;
		sum=sum+a*a*a;
		n=n/10;
	}
	if(sum==c)
	printf("armstrong number");
	else
	printf("not armstrong");
}
