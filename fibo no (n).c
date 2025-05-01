#include<stdio.h>
main()
{
	int s=0,n,a=0,b=1,c=0,i;
	printf("enter the range");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		c=a+b;
		s=s+c;
		a=b;
		b=c;
	}
	printf("sun of the series=%d",s);
}
