#include<stdio.h>
 void main()
{
	float side,perimeter,area;
	
	printf("enter the length of the side of the square:\n");
	scanf("%f",&side);
	
	perimeter= 4 * side;
	printf("perimeter of the square:\n",perimeter);
	
	area= side * side;
	printf("area of the square:\n",area);
}
