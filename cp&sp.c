#include<stdio.h>
main()
{
	float cost_price,selling_price,profit;
	printf("enter the cost_price:");
	scanf("%f",&cost_price);
	printf("enter the selling_price:");
	scanf("%f",&selling_price);
	profit=selling_price - cost_price;
	printf("the profit=%f",profit);

}
