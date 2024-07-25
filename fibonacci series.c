#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,i,n;
	printf("how many fibonacci numbers you wish to create:");
	scanf("%d",&n);
	a=0;
	b=1;
	i=3;
	printf("%d %d ,a,b");
	while(i<=n)
	{
		c=a+b;
		printf(" %d",c);
		a=b;
		b=c;
		i=i+1;
	}
	return 0;
}
