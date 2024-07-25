#include<stdio.h>
main()
{
	int i,n,m,a,sum=0,r;
	printf("enter the numder:");
	scanf("%d",&n);
	i=1;
	m=n;
	while(n>0)
	{
		a=n%10;
		r=(r*10)+a;
		i=i+1;
	}
	if(m==sum)
	printf("given number is a palindrome\n");
	else
	printf("given number is not palindeome\n");
}
