#include <stdio.h>
#define pi 3.141
main()
{
	float r,a,c;
	printf("enter the radius of circle:");
	scanf("%f",&r);
	a=pi*r*r;
	c=2*pi*r;
	printf("the area of circle is %f",a);
	printf("\nthe circumferce of the circle is %f",c);
	
	
}
