#include<stdio.h>
#include<stdlib.h>
main(){
	int a[2][2],b[2][2],c[2][2],i,j;
	
//	printf("%d address of a[0]=%d",a,&a[0]);
	printf("enter the values of matrix A:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("value[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("enter the values of matrix B:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("value[%d][%d]=",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
