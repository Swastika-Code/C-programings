#include<stdio.h>
main()
{
	int i,n,m;
	printf("enter the lower limit");
	scanf("%d",&n);
	printf("enter the upper limit");
	scanf("%d",&m);
	i=n;
	while(i<=m)
	{
		printf("%d,",i);
		i++;
	}
}
