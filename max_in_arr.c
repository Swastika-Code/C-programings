#include<stdio.h>
#include<conio.h>
#include<limits.h>
void main()
{
	int n,i;
	int x[10];
	printf("Enter the size of the array(1 to 10): ");
	scanf("%d", &n);
	printf("Enter the number of elements in the array: ");
	for(i=0; i<n; i++)
	{	
		scanf("%d", &x[i]);
	}
	int max = x[0];
	for(i=1; i<n; i++)
	{
		if(x[i]>max)
		{
			max=x[i];
		}
	}
	printf("Largest element = %d", max);
	
}
