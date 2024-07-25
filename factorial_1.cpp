#include<stdio.h>
int main()
{
	int n,i,f=1;
	printf("enter an integer:");
	scanf("%d",&n);
	i=1;
	if(n<0) 
	     printf("factorial of a negative number does not exist.");
    else
    {
    	while(i<=n)
    	{
    		f*=i;
    		i=i+1;
		}
		printf("factorial of %d =%d",n,f);
	}
	return 0;
	     
}
