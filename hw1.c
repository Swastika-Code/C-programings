#include<stdio.h>
main()
{
	int s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,total,average;
	
	printf("enter 1st subject mark:");
	scanf("%d",&s1);
	
	printf("enter 2nd subject mark:");
	scanf("%d",&s2);
	
	printf("enter 3rd subject mark:");
	scanf("%d",&s3);
	
	printf("enter 4th subject mark:");
	scanf("%d",&s4);
	
	printf("enter 5th subject mark:");
	scanf("%d",&s5);
	
	printf("enter 6th subject mark:");
	scanf("%d",&s6);
	
	printf("enter 7th subject mark:");
	scanf("%d",&s7);
	
	printf("enter 8th subject mark:");
	scanf("%d",&s8);
	
	printf("enter 9th subject mark:");
	scanf("%d",&s9);
	
	printf("enter 10th subject mark:");
	scanf("%d",&s10);
	
	total=s1+s2+s3+s4+s5+s6+s7+s8+s9+s10;
	printf("total marks=%d",total);
	average=total/10;
	printf("average marks=%d",average);
	
}
