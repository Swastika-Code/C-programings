#include<stdio.h>
main()
{
	int i,a,b;
	printf("enter the lower number :");
	scanf("%d",&a);
	printf("enter the upper number:");
	scanf("%d",&b);
	i=a;
	while(i<=b)
	{
		if(i%7==0 || i%10==7) 
		printf("%d,",i);
		i++;
	}
}
