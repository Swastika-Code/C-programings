#include<stdio.h>
main()
{
	int i;
	float s=0;
	for(i=1;i<=4;i++)
	{
		s=s+((float)i/4.0);
	}
	printf("sum of the series=%f",s);
}
