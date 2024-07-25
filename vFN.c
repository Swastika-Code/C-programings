#include<stdio.h>

void isprime(int n)
{
	int i,c=0;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
			c++;
	}
	if(c==0)
	printf("prime");
	else
	printf("not prime");
}

main()
{
	int n;
	printf("enter a number :");
	scanf("%d",&n);
	
	isprime(n);
}
