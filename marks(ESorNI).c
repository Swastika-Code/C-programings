#include<stdio.h>
int main()
{
	float marks1,marks2,marks3,average;
	printf("enter marks 1:");
	scanf("%d",&marks1);
	
	printf("enter marks 2:");
	scanf("%d",&marks2);
	
	printf("enter marks 3:");
	scanf("%d",&marks3);
	
	 average=(marks1+marks2+marks3)/3;
	 
	 if(average>90 && marks1>60 && marks2>60 && marks3>60) 
	 {
	 	printf("Excellent Student\n");
	 }
	 else
	 {
	 	printf("needs improvement\n");
	 }
	
}
