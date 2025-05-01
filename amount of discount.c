#include<stdio.h>
main()
{
	int price;
	printf("enter a value:");
	scanf("%d",&price);
	if(price<=1000)
	printf(" gift chocolate,%d",price);
	
	else if(price>=1001 && price<=5000)
	{
		price=price*0.95;
		printf("price ,%d",price);	
	}
	else if(price>=5001 && price<=10000)
	{
		price=price*1.10;
		printf("price ,%d",price);	
	}
	else
	{
		price=price*0.85;
		printf("price and the gift is bag,%d",price);	
	}	
}
