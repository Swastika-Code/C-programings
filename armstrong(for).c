#include<stdio.h>
main()
{
	int i,a,sum=0,n;
	printf("all the armstrong number between 100 and 1000 are:\n");
	scanf("%d,",&n);
	for(i=100;i<=1000;i++)
	{
	
	   sum=0;
	    i=n;
	while(n>0)
	{
		a=n%10;
		sum=sum+a*a*a;
		n=n/10;
	}
	if(sum==i)
	printf("armstrong number");
	else
	printf("not armstrong number");
	
}  
}
