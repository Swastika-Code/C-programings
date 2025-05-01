#include<stdio.h>
main()
{
	int i,a,b,c=0;
	printf("enter the start of the range:");
	scanf("%d",&a);
	
	printf("enter the end of the range:");
	scanf("%d",&b);
	
	i=a;
	while(i<=b)
	{
		if(i%7==0 || i%10==7)
		{
			c++;
		}
		i++;
	}
	if(c%5==0)
		printf("Abraka Dabra");
	else
		printf("Gilli Chuu");
	
}
