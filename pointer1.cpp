#include<stdio.h>
main(){
	int a=10,b,c,*p;
	p=&a;
	printf("add of p=%d\n",p);
	printf("value of p=%d\n",*p);
	b=a+*p;
	
	p++;

	printf("add of p=%d\n",&p);
	*p=20;
	printf("value of p=%d\n",*p);
	
	c=a+*p;
	
	printf("a=%d,b=%d,c=%d",a,b,c);
}
