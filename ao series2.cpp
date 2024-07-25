#include<stdio.h>
main()
{
	int i,n;
	float sum=0.0f;
	printf("give the last value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	sum=sum+(1/(float)i);
	printf("sum of the series is=%f",sum);
}
