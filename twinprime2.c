#include<stdio.h>

int isprime(int n)
{
	int i,c=0;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
			c++;
	}
	if(c==0)
	return 1;
	else
	return 0;
}

main(){
	int lb,ub,i;
	printf("enter lower and upper bound (lb,ub):");
	scanf("%d,%d",&lb,&ub);
	
	for(i=lb;i<=ub;i++)
	{
		if(isprime(i)==1 && isprime(i+2)==1)
			printf("(%d,%d),",i,i+2);
	}
}
