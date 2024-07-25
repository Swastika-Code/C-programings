#include<stdio.h>
main()
{
	int i,n,a,ib,ub,sum=0,armstrong;
	printf("enter the lower limit:");
	scanf("%d",&ib);
	printf("enter the upper limit:");
	scanf("%d",&ub);
	for(i=ib;i<=ub;i++)
	{
		n=i;
		armstrong=n;
		sum=0;
		while(n>0)
		{
		a=n%10;
		sum=sum+a*a*a;
		n=n/10;
		}
		if(sum==armstrong)
		
		printf("%dis a armstrong number\n",armstrong);
		
	}
	
}
	
