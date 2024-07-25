#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	int *p;
	a=20;
	p=&a;
	b=*p;
	printf("value of a is %d\n\n",a);
	printf("%d is stored at address %u\n",a,&a);
	printf("%d is stored at address %u\n",&a,&a);
	printf("%d is stored at address %u\n",*p,&p);
	printf("%d is stored at address %u\n",b,&b);
	printf("%d is stored at address %u\n",p,&p);
	*p=30;
	printf("\nNow a=%d\n",a);
	getch();
	
}
