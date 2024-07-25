#include<stdio.h>
#include<conio.h>
void main()
{
	int i,s;
	s=0;
	i=1;
	while(i<=100)
	{
		s=s+i*i;
		i=i+1;
	
	}
	printf("the sum of the series is %d",s);
	getch();
}
