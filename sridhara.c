#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,r1,r2;
	printf("enter the number of a:");
	scanf("%d",&a);
	printf("enter the number of b:");
	scanf("%d",&b);
	printf("enter the number of c:");
	scanf("%d",&c);
	d=pow(b,2) - 4 * a * c;
	r1=((-b)+sqrt(d))/2*a;
	r2=((-b)-sqrt(d))/2*a;
//	printf("sridhara acharya=%d\n",d);
	printf("sridhara acharya 1=%d\n",r1);
	printf("sridhara acharya 2=%d\n",r2);
	return 0;
	
}
