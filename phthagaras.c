#include<stdio.h>
#include<math.h>
int main()
{
	int h,p,b;
	printf("enter the number of p:");
	scanf("%d",&p);
    printf("enter the number of b:");
	scanf("%d",&b);
	h=sqrt(pow(p,2)+pow(b,2));
	printf("hypotenus=%d\n",h);
	return 0;
}
