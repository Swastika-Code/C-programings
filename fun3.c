#include<stdio.h>

double isF(double c)
{
	double F=(c*9/5)+32;
	return F;
}
main()
{
	double c,f;
	printf("enter the temperature in celcius:");
	scanf("%lf",&c);
	f=isF(c);
	printf("farenheit=%lf",f);
}

