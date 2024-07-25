#include<stdio.h>
main()
 {
 	float cp,sp,profit,pp;
 	printf("enter the cost price:");
 	scanf("%f",&cp);
 	printf("enter the selling price:");
 	scanf("%f",&sp);
 	profit=sp-cp;
 	pp=profit/cp*100;
 	printf("the profit is %f",profit);
 	printf("\nthe profit percentage is %f",pp);
 	
 	
 }
