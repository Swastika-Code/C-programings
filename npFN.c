#include<stdio.h>
int a=0,b=0;//global variable

void sum()
{
	printf("sum=%d",(a+b));
	a++;
	b++;
}


main(){
	printf("enter a,b :");
	scanf("%d,%d",&a,&b);
	
	sum();
	sum();
}



//void display()
//{
//	printf("Aj khub gorom\n");
//}
//
//main()
//{
//	int i;
//	for(i=0;i<20;i++)
//	{
//		display();
//	}
//}
