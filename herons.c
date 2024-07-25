#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c;
	float s,ar;
	printf("enter the number of a:");
	scanf("%f",&a);
	printf("enter the number of b:");
	scanf("%f",&b);
	printf("enter the number of c:");
	scanf("%f",&c);
	s=(a+b+c)/2;
	printf("s=%f",s);
	
	ar=s*(s-a)*(s-b)*(s-c);
	
	printf("the area of triangle is=%.2f",ar);
	
}
