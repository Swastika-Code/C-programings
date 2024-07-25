#include<stdio.h>
main()
{
	int n,i,c=0;
	printf("ekta sonkha dao:");
	scanf("%d",&n);
	for(i=2;i<n/2;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	if(c==0)
	printf("moulik sonkha:prime");
	else
	printf("jougik sonkha:composite");
}
