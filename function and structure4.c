#include<stdio.h>
#include<conio.h>
int n;
long int factorial(int);
void display (int);
/*the difination of the factorial()function*/
long int factorial(int n)
{
	if(n==0)
	return(1);
	else
	return(n*factorial (n-1));
}
/*output function*/
void display(int n)
{
	printf("\n factorial of:%d =%d",n,factorial(n));
}
/*main function*/
void main()
{
	int n;
	printf("\n input the number of which you want to find factorial:");
	scanf("%d",&n);
	factorial(n);
	display(n);
	getch();
}

