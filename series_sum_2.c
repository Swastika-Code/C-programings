#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	float s=0.0;
	for(i=2;i<=100;i++)
	{
		s=s+1/(float)i;
	}
	printf("the sum of the series is %f",s);
	getch();
}
