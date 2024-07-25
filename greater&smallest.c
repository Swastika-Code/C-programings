#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter three number:\n");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a>b && a>c)
	printf("greater is %d",a);
	else if(b>c && b>a)
	printf("greater is %d",b);
	else
	printf("greater is %d",c);
	
	
	if(a<b && a<c)
	printf(" and smallest is %d\n",a);
	else if(b<c && b<a)
	printf(" and smallest is %d\n",b);
	else
	printf(" and smallest is %d\n",c);
}
