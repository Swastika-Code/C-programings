#include<stdio.h>
main()
{
	int i,n,sum=0,eve[20],c=0;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		
		{
			sum=sum+i;
			eve[c]=i;c++;
		}
	}
	printf("sum of even number =%d",sum);
	for(i=0;i<c;i++)
	{
		printf("%d,",eve[i]);
	}
}
