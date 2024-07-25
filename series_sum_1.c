#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	float s=0.0;
	for(i=1;i<=100;i++)
	{
		s=s+i/((float)i+1);
	}
	printf("the sum of the series is %f",s);
	getch();
}
