#include<stdio.h>
main()
{
	int n,i,c=0,*a,s;
	printf("enter the arrays size:");
	scanf("%d",&s);
	a=(int*)malloc(sizeof(int)*s);
	
	//input array 
	for(i=0;i<s;i++)
	{
	
	printf("enter the element:");
	scanf("%d",&a[i]);
	
	 
    }
	
	//searching 
	printf("enter the element to be search:");
	scanf("%d",&n);
	for(i=0;i<s;i++)
	{
		if(a[i]==n)
		{
			c=1;
		}
	}
	if(c==1)
	printf("found:");
	else
	printf("not found:");
	free(a);
}
