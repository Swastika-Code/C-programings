#include<stdio.h>
main()
{
	float side,perimeter,area;
	
	printf("enter the length of the side of the square:\n");
	scanf("%f",&side);
	
	perimeter= 4 * side;
	printf("perimeter of the square:%f\n",perimeter);
	
	area= side * side;
	printf("area of the square:%f\n",area);
}
