#include<stdio.h>
main()
{
	float hra,pa,da,gross,net;
	printf("enter the gross:");
	scanf("%f",&gross);
	hra= gross*10/100;
	da=gross*2/100;
	pa=gross*5/100;
 net=gross+pa+da+gross;
 printf("net salary is %f",net);
 
}
