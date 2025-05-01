#include<stdio.h>
main()
{
	int i,num,r,mul;
	printf("enter a number:");
	scanf("%d",&num);
	printf("enter the range:");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
	    mul=num*i;
		printf("%d x %d = %d\n",num,i,mul);
	}
	return 0;
}
