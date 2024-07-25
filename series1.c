#include<stdio.h>
main()
{
	int i=1,n,sum=0;
	printf("give the value of n:");
	scanf("%d",&n);
	sum=0;
	for(i=1;i<=n;i++)
	sum=sum+i*i;
	printf("result=%d",sum);
}
