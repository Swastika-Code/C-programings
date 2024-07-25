#include<stdio.h>
#include<math.h>
main()
{
	int base,exp,result;
	printf("enter a base number:\n");
	scanf("%d",&base);
	printf("enter an exponent:\n");
	scanf("%d",&exp);
	result=pow(base,exp);
	printf("the answer is:%d\n",result);
	return 0;
}



