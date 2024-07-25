#include<stdio.h>
main()
{
	int i,a,b;
	printf("enter the lower limit:");
	scanf("%d",&a);
	printf("enter the upper limit:");
	scanf("%d",&b);
	i=a;
	while(i<=b)
	{
		if(i%2==0)
		{
			printf("%d,",i);
		 }
		 i++;
	}
}
