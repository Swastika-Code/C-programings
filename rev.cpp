#include<stdio.h>

main(){
	int n,a=0,r=0;
	printf("enter a number to reverse :");
	scanf("%d",&n);
	
	while(n>0){
		a=n%10;
		r=(r*10)+a;
		n=n/10;
	}
	printf("reverse is=%d");
}
