#include<stdio.h>
main()
{
	int marks;
	printf("enter a number:");
	scanf("%d",&marks);
	if(marks<=100 && marks>=0)
	{
		if(marks<=100 && marks>=90)
	printf("grade A+ ,%d",marks);
	
	else if(marks<=89 && marks>=80)
		printf("grade A ,%d",marks);

	else if(marks<=79 && marks>=70)
	printf("grade B+ ,%d",marks);
	
	else if(marks<=69 && marks>=60)
	printf("grade B ,%d",marks);
	
	else if(marks<=59 && marks>=50)
	printf("grade C ,%d",marks);
	
	else
		printf("grade F ,%d",marks);
	}
	else{
		printf("invalid input please enter between 100-0");
	}
	
}
