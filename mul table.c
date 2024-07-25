#include<stdio.h>
main()
{
	int n,m,i,mul;
	printf("enter the number:");
	scanf("%d",&n);
	printf("enter the range:");
	scanf("%d",&m);
	for(i=1;i<=m;i++)
	{
		mul=n*i;
		printf("%d x %d = %d\n",n,i,mul);
	}
	
}
