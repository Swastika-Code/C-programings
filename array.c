#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	long int f;
	int x[10];
	printf("Enter 10 element of the array:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&x[i]);
	}
	for(i=0;i<10;i++)
	{
		f=1;
		for(j=1;j<=x[i];j++)
		{
			f=f*j;
			
		}
		printf("\n %d!=%1d",x[i],f);
	}
	getch();
}
