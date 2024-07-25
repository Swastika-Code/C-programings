#include<stdio.h>
int main()
{
	int i,a,b,even,odd;
	printf("enter the lower number:");
	scanf("%d",&a);
	printf("enter the upper number:");
	scanf("%d",&b);
	i=a;
	while(i<=b)
	{
		i++;
	}
	{
		if(i%2==0)
		{
			printf("%d",i);
		}
		i++;
	}
}
