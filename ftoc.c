#include<stdio.h>
int main()
{
	double c,f;
	printf("enter the temperature in fahrenheit\n");
	scanf("%f",&f);
	c=(f-32)*(5/9);
	printf("temperture in celsius is %f\n",c);
	return 0;
} 
