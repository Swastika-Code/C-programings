#include<stdio.h>
int main()
{
	int *sc,i;
	int h[10]={0,0,0,0,0,0,0,0,0,0};
	sc=&h[2];
	for(i=0;i<10;i++)
	{
		*sc=55;
		sc++;
//		h[i]=i+1;
	}
	for (i=0;i<10;i++)
	{
		printf("a%d\n",h[i]);
	}
	return 0;
}
