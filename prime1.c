#include<stdio.h>
main(){
	int i,n,c=0,lb,ub,count=0;
	printf("enter a lower limit:");
	scanf("%d",&lb);
	
	printf("enter a uper limit:");
	scanf("%d",&ub);
	
	for(n=lb;n<=ub;n++)
	{
		//printf("n=%d\n",n);1
		c=0;
		for(i=2;i<n;i++)
		{
			if(n%i==0)
			{
				c++;
			}
		}
		if(c==0)
		{
			printf("%d is a prime number\n",n);
			count++;
		}
	}
	
	printf("total prime no in the range =%d",count);
	
/*	printf("enter a numer");
	scanf("%d",&n);*/
	
/*	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	if(c==0)
	printf("prime ba moulik");
	else
	printf("not prime");*/
	
}
