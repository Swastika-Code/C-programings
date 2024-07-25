#include<stdio.h>
#include<conio.h>
void swap(int*,int*);
int main()
{
	int a,b;
	printf("enter the no for a and b:\n");
	scanf("%d %d",&a,&b);
	printf("\n after swapping 1st number=%d,2nd number=%d",a,b);
	getch();
}
void swap(int *x,int *y)
{
	*x=*x=*y;
	*y=*x-*y;
	*x=*x-*y;
}
