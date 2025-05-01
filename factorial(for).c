#include<stdio.h>
int main()
{
	int n,i,fac=1;
	printf("enter an integer:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	fac*=i;
	{
		printf("factorial of %d is %d\n",n,fac);
	}
	return 0;
}
