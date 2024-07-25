#include<stdio.h>
main()
{
	int i,n,m,s=0;
	printf("enter the lower limit:");
	scanf("%d",&n);
	printf("enter the upper limit:");
	scanf("%d",&m);
	i=n;
	while(i<=m)
	{
		s=s+i;
		i++;
	}
	printf("sum of number=%d",s);
	
	
}
