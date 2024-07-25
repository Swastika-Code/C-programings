#include<stdio.h>
main()
{
	int sp,cp,amount;
	
	printf("enter the selling price:");
	scanf("%d",&sp);
	printf("enter the cost price:");
	scanf("%d",&cp);
	if(sp>cp)
	{
		amount=sp-cp;
		printf("profit:%d\n",amount);
	}
	else
	{
		amount=cp-sp;
		printf("loss:%d\n",amount);
	}
}
