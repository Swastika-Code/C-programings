#include<stdio.h>
#include<conio.h>

void swap(int,int);
void main()
{
	int a,b,c ;
	printf ("enter number of a and b:\n");
	scanf("%d%d",&a,&b);
	swap(a,b);
	getch();
}
void swap(int a,int b)
{
	int c=a;
	a=b;
	b=c;
	printf("enter the 1st number=%d,2nd number=%d",a,b);
	
}


