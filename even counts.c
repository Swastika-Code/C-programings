#include<stdio.h>
main()
{
	int i,a,b,c=0;
	printf("enter the lower number :");
	scanf("%d",&a);
	printf("enter the upper number:");
	scanf("%d",&b);
	i=a;
	while(i<=b)
	{
		if(i%2==0 ) 
		{
				printf("%d,",i);
				c++;
		}
		i++;
	}
	printf("\nnumber of even no=%d",c);
}
