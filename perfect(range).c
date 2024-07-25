#include<stdio.h>
main()
{
	int i,n,j,lb,ub,sum=0;
	printf("enter the lower limit:");
	scanf("%d",&lb);
	printf("enter the upper limit:");
	scanf("%d",&ub);
	for(i=lb;i<=ub;i++)
	{
		n=i;
		sum=0;
		for(j=1;j<=n/2;j++)
	
	{
		if(n%j==0)
		sum=sum+j;
	}
	if(n==sum)
	printf("%d is a perfect number\n",sum);
	}
}


	
