#include<stdio.h>
main()
{
	int n,m,i,s1=0,s2=0;
	printf("enter the number:");
	scanf("%d",&n);
	printf("enter the number:");
	scanf("%d",&m);
	for(i=n;i<=m;i++)
	{
		if(i%2==0)
		s1=s1+i;
		else
		s2=s2+i;
	}
	printf("sum of even number:%d\n",s1);
	printf("sum of odd number:%d\n",s2);
}
