#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,n,*a;
	printf("enter the size of array:");
	scanf("%d",&n);
	
	a=(int*)malloc(n*sizeof(int));
	
	for(i=0;i<n;i++)
	{
		a[i]=1;
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d,",a[i]);
	}
	free(a);
	return 0;
}
