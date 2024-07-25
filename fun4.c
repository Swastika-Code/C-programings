#include<stdio.h>

double Speed(double d ,double t)
{
	double S=d/t;
	return S;
}
main()
{
	double d,t,p;
	printf("enter the time:");
	scanf("%lf",&t);
	printf("enter the distance:");
	scanf("%lf",&d);
	p=Speed(d,t);
	printf("speed is=%lf km/h",p);
}



