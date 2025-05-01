#include<stdio.h>
main()
{
	int a=0,b=1,c=0,i;
	printf("%d,%d,",a,b);
	for(i=0;i<=10;i++)
	{
	
	c=a+b;
	printf("%d,",c);
	a=b;
	b=c;
}
}
