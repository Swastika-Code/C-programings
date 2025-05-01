#include<stdio.h>
main()
{
	int i,n,m,c=0;
	printf("enter the start of the range:");
	scanf("%d",&n);
	
	printf("enter the end of the range:");
	scanf("%d",&m);
	i=n;
	for(i=n;i<=m;i++)
	{
		if(i%7==0 || i%10==7)
		{
			c++;
		}
		i++;
	}
	if(c%5==0)
		printf("buzz number");
	else
		printf("not buzz number");
	
}
	
	

