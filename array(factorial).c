#include<stdio.h>
main()
{
	int i,j,f,x[10];
	printf("enter 10 elements of the array:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&x[i]);
	}
	for(i=0;i<10;i++)
	{
		f=1;
		for(j=1;j<=x[i];j++)
		{
			f=f*j;
		}
		printf("%d,",f);
	}

}
