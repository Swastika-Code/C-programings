#include<stdio.h>

double arREC(double l,double b)
{
	double ar=l*b;
	return ar;
	
}
double arCIR(double r)
{
	double ar=3.14*r*r;
	
	return ar;
}

double arTRI(double a,double b)
{
	return (0.5*b*a);
}

main()
{
	int ch;
	double ar,a,b;
	printf("1>area of circle\n");
	printf("2>area of Rectangle\n");
	printf("3>area of triangle\n");
	printf("enter your choice :");
	scanf("%d",&ch);
	if(ch==1)
	{
		printf("radius er value dao :");
		scanf("%lf",&a);
		ar=arCIR(a);
		printf("area of circle =%f",ar);
	}
	else if(ch==2)
	{
		printf("length er value dao :");
		scanf("%lf",&a);
		printf("breadth er value dao :");
		scanf("%lf",&b);
		ar=arREC(a,b);
		printf("area of circle =%f",ar);
	}
	else if(ch==3)
	{
		printf("base er value dao :");
		scanf("%lf",&a);
		printf("height er value dao :");
		scanf("%lf",&b);
		ar=arTRI(a,b);
		printf("area of circle =%f",ar);
	}
	else{
		printf("invalid choice");
	}
}

