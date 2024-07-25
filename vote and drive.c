#include<stdio.h>
int main()
{
	int age;
	printf("enter the age:");
	scanf("%d",&age);
	if(age<18 && age>16)
	{
		printf("you are eligible to drive.\n");
	}
	else if (age>18)
	{
		printf("you are eligible to vote and drive.\n");
	}
	else
	{
		printf("you are not eligible to vote and drive.\n");
	}
}
