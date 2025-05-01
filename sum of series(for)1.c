#include<stdio.h>
main()
{
	int s=0,i;
	for(i=1;i<=4;i++)
	{
		s=s+(i/4);
	}
	printf("sum of the series=%d",s);
}
