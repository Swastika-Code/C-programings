#include<stdio.h>
int main()
{
	int x,y,result;
	char s;
	printf("enter the expression");
	scanf("%d %c %d",&x,&s,&y);
	switch (s)
	{
		case '-':
		result=x-y;
		break;
		case '+':
		result=x+y;
		break;
		case '/':
		result=x/y;
		break;
		case '%':
		result=x%y;
		break;
		default:
			printf("invalid");
	}
	printf("result=%d",result);
}
