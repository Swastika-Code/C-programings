#include<stdio.h>
main()
{
	int i,j;
	for(i=4;i>=1;i--)
	{
		for(j=4;j>=i;j--)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}
//4   4-4
//33   4-3
//222  4-2
//1111 4-1

