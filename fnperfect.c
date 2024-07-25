#include<stdio.h>

int isperfect(int n)
{
	int i,c=0;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		c=c+i;		
	}
	if(c==n)
	return 1 ;
	else
	return 0;	
}
main()
{
	int lb,ub,i;
	printf("enter lower limit and upper limit(lb,ub)");
	scanf("%d,%d",&lb,&ub);
	for(i=lb;i<ub;i++)
	{
		if (isperfect(i)==1)
			printf("%d,",i);
			
		
	}
	
}
